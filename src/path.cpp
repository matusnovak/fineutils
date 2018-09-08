#include <algorithm>
#include <ffw/utils/path.h>

#ifdef FFW_WINDOWS
#include <algorithm>
#define NOMINMAX
#include <shlobj.h>
#include <Windows.h>
#else
#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <algorithm>
#endif

ffw::Path ffw::pathParse(const std::string& path) {
    Path p;
    if (path.empty())p;

    std::string& base = p.base;
    std::string& dir = p.dir;
    std::string& ext = p.ext;

    size_t back = std::min(path.find_last_of(char('\\')), std::string::npos);
    size_t slash = std::min(path.find_last_of(char('/')), std::string::npos);
    if (slash < back && back != std::string::npos)slash = back;
    if (slash == std::string::npos)slash = back;

    //size_t slash = std::min(path.find_last_of(T('\\')), path.find_last_of(T('/')));
    if (slash == std::string::npos) {
        // Check if drive
        if (path.size() == 2 && path[1] == char(':')) {
            dir = path;
        }
        else {
            // Split name only
            size_t dot = path.find_last_of(char('.'));

            if (dot == std::string::npos) {
                base = path;

            }
            else {
                base = path.substr(0, dot);
                ext = path.substr(dot + 1, path.size() - dot - 1);
            }
        }
    }
    else {
        // Split dir and name
        dir = path.substr(0, slash + 1);
        size_t dot = path.find_last_of(char('.'));

        if (dot != std::string::npos && dot > slash) {
            if (dot == slash + 1) {
                base = path.substr(slash + 1, path.size() - slash - 1);
            }
            else {
                base = path.substr(slash + 1, path.size() - slash - 1 - (path.size() - dot - 1) - 1);
                ext = path.substr(dot + 1, path.size() - dot - 1);
            }
        }
        else {
            base = path.substr(slash + 1, path.size() - slash - 1);
        }
    }

    return p;
}

std::string ffw::basename(const std::string& path) {
    return pathParse(path).base;
}

std::string ffw::dirname(const std::string& path) {
    return pathParse(path).dir;
}

std::string ffw::extension(const std::string& path) {
    return pathParse(path).ext;
}

std::string ffw::getLocalAppDataDir() {
#ifdef FFW_WINDOWS
    static std::string appDataDir;
    if (appDataDir.empty()) {
        char appDataPath[MAX_PATH];
        SHGetSpecialFolderPathA(nullptr, appDataPath, CSIDL_LOCAL_APPDATA, false);
        appDataDir = std::string(appDataPath);
    }
    return appDataDir;
#else
    return "";
#endif
}

std::string ffw::getAppDataDir() {
#ifdef FFW_WINDOWS
    char appDataPath[MAX_PATH];
    SHGetSpecialFolderPathA(nullptr, appDataPath, CSIDL_APPDATA, false);
    return std::string(appDataPath);
#else
    return "";
#endif
}

std::string ffw::getWorkingDir() {
#ifdef FFW_WINDOWS
    char pwd[MAX_PATH];
    GetCurrentDirectoryA(MAX_PATH, pwd);
    return std::string(pwd);
#else
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        return std::string(cwd);
    }
    return "";
#endif
}

std::string ffw::getExecutableDir() {
#ifdef FFW_WINDOWS
    char exePath[MAX_PATH];
    GetModuleFileNameA(nullptr, exePath, MAX_PATH);
    std::string executableDir = ffw::dirname(std::string(exePath));
    executableDir = executableDir.substr(0, executableDir.size() - 1);
    return executableDir;
#else
    char result[PATH_MAX];
    char szTmp[32];
    sprintf(szTmp, "/proc/%d/exe", getpid());
    int bytes = std::min(readlink(szTmp, result, PATH_MAX), PATH_MAX - 1);
    if (bytes >= 0)
        result[bytes] = '\0';
    return std::string(result);
#endif  
}

char ffw::pathDelimiter() {
#if FFW_WINDOWS
    return '\\';
#else
    return '/';
#endif
}