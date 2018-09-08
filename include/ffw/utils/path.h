/* This file is part of FineFramework project */
#ifndef FFW_UTILS_FILEINFO
#define FFW_UTILS_FILEINFO

#include "config.h"
#include <string>
#include <sstream>

namespace ffw {
    /**
     * @ingroup utils
     */
    struct Path {
        std::string base;
        std::string dir;
        std::string ext;
    };
    /**
     * @ingroup utils
     */
    extern FFW_API Path pathParse(const std::string& path);
    /**
     * @ingroup utils
     */
    extern FFW_API std::string basename(const std::string& path);
    /**
     * @ingroup utils
     */
    extern FFW_API std::string dirname(const std::string& path);
    /**
     * @ingroup utils
     */
    extern FFW_API std::string extension(const std::string& path);
    /**
     * @ingroup utils
     */
    extern FFW_API std::string getLocalAppDataDir();
    /**
     * @ingroup utils
     */
    extern FFW_API std::string getAppDataDir();
    /**
     * @ingroup utils
     */
    extern FFW_API std::string getWorkingDir();
    /**
     * @ingroup utils
     */
    extern FFW_API std::string getExecutableDir();
    /**
     * @ingroup utils
     */
    extern FFW_API char pathDelimiter();
    /**
     * @ingroup utils
     */
    template<class Iterator>
    inline std::string pathJoin(Iterator begin, Iterator end) {
        std::stringstream ss;

        if (begin == end) return "";

        ss << *begin;
        ++begin;
        for (auto it = begin; it != end; ++it) {
            ss << pathDelimiter() << *it;
        }
        return ss.str();
    }
    /**
     * @ingroup utils
     */
    inline std::string pathJoin(const std::initializer_list<std::string>& list) {
        return pathJoin(list.begin(), list.end());
    }
}

#endif
