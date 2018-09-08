/* This file is part of FineFramework project */
#ifndef FFW_UTILS_STRING_MATH
#define FFW_UTILS_STRING_MATH
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <cstdint>
#include "config.h"
#include "third_party/utfcpp/checked.h"
#include "tokenizer.h"

namespace ffw {
    /**
    * @ingroup utils
    * @exception Throws std::invalid_argument (invalid conversion)
    * or std::out_of_range (conversion is out of the range)
    */
    template <class T> inline T stringToVal(const std::string& str);
    /**
    * @ingroup utils
    */
    template <> inline float                stringToVal<float>(const std::string& Str) { return std::stof(Str); }
    /**
    * @ingroup utils
    */
    template <> inline double               stringToVal<double>(const std::string& Str) { return std::stod(Str); }
    /**
    * @ingroup utils
    */
    template <> inline long double          stringToVal<long double>(const std::string& Str) { return std::stold(Str); }
    /**
    * @ingroup utils
    */
    template <> inline short                stringToVal<short>(const std::string& Str) { return static_cast<short>(std::stoi(Str)); }
    /**
    * @ingroup utils
    */
    template <> inline int                  stringToVal<int>(const std::string& Str) { return std::stoi(Str); }
    /**
    * @ingroup utils
    */
    template <> inline long                 stringToVal<long>(const std::string& Str) { return std::stol(Str); }
    /**
    * @ingroup utils
    */
    template <> inline long long            stringToVal<long long>(const std::string& Str) { return std::stoll(Str); }
    /**
    * @ingroup utils
    */
    template <> inline unsigned short       stringToVal<unsigned short>(const std::string& Str) { return (unsigned short)std::stoul(Str); }
    /**
    * @ingroup utils
    */
    template <> inline unsigned int         stringToVal<unsigned int>(const std::string& Str) { return std::stoul(Str); }
    /**
    * @ingroup utils
    */
    template <> inline unsigned long        stringToVal<unsigned long>(const std::string& Str) { return std::stoul(Str); }
    /**
    * @ingroup utils
    */
    template <> inline unsigned long long   stringToVal<unsigned long long>(const std::string& Str) { return std::stoull(Str); }
    /**
    * @ingroup utils
    */
    template <class T>
    inline std::string valToString(T Value) {
        return std::to_string(Value);
    }
    /**
    * @ingroup utils
    */
    template <class T>
    inline std::string valToString(T Value, unsigned int Dec) {
        std::ostringstream ostr;
        ostr.precision(Dec);
        ostr << std::fixed << Value;
        return ostr.str();
    }
    /**
    * @ingroup utils
    */
    template<typename T>
    inline T hexToVal(const std::string& Str) {
        try {
            return std::stoul(Str, nullptr, 16);
        }
        catch (std::invalid_argument e) {
            return 0;
        }
        catch (std::out_of_range e) {
            return 0;
        }
        return 0;
    }
    /**
    * @ingroup utils
    */
    template<typename T>
    inline std::string valToHex(const T& Value) {
        static const char chars[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' };
        std::string str;
        str.resize(sizeof(T) * 2);
        for (size_t i = 0; i < sizeof(T) * 2; i++) {
            char c = char(Value >> (i * 4));
            c = c & 0x0F;
            str[sizeof(T) * 2 - i - 1] = chars[int(c)];
        }
        return str;
    }
    /**
    * @ingroup utils
    */
    template<class T, typename CharTrait = std::char_traits<T>, typename Allocator = std::allocator<T>>
    size_t getTokensFunc(
        std::vector<std::basic_string<T, CharTrait, Allocator>>* vec,
        const std::basic_string<T, CharTrait, Allocator>& str,
        const std::basic_string<T, CharTrait, Allocator>& delim) {
        Tokenizer<T> tokenizer(str, delim);
        std::basic_string<T, CharTrait, Allocator> temp;
        size_t cnt = 0;
        if (vec != NULL) {
            while (tokenizer.getNext(&temp)) {
                vec->push_back(temp);
                cnt++;
            }
        }
        else {
            while (tokenizer.skipNext()) {
                cnt++;
            }
        }
        return cnt;
    }
    /**
    * @ingroup utils
    */
    inline std::vector<std::string> getTokens(const std::string& str, const std::string& delim) {
        std::vector<std::string> ret;
        getTokensFunc(&ret, str, delim);
        return ret;
    }
    /**
    * @ingroup utils
    */
    inline std::vector<std::string> getTokens(const std::string& str, char delim) {
        std::vector<std::string> ret;
        getTokensFunc(&ret, str, std::string(1, delim));
        return ret;
    }
    /**
    * @ingroup utils
    */
    inline std::vector<std::wstring> getTokens(const std::wstring& str, const std::wstring& delim) {
        std::vector<std::wstring> ret;
        getTokensFunc(&ret, str, delim);
        return ret;
    }
    /**
    * @ingroup utils
    */
    inline std::vector<std::wstring> getTokens(const std::wstring& str, wchar_t delim) {
        std::vector<std::wstring> ret;
        getTokensFunc(&ret, str, std::wstring(1, delim));
        return ret;
    }
    /**
    * @ingroup utils
    */
    inline size_t getTokensNum(const std::string& str, const std::string& delim) {
        return getTokensFunc((std::vector<std::string>*)NULL, str, delim);
    }
    /**
    * @ingroup utils
    */
    inline size_t getTokensNum(const std::string& str, char delim) {
        return getTokensFunc((std::vector<std::string>*)NULL, str, std::string(1, delim));
    }
    /**
    * @ingroup utils
    */
    inline size_t getTokensNum(const std::wstring& str, const std::wstring& delim) {
        return getTokensFunc((std::vector<std::wstring>*)NULL, str, delim);
    }
    /**
    * @ingroup utils
    */
    inline size_t getTokensNum(const std::wstring& str, wchar_t delim) {
        return getTokensFunc((std::vector<std::wstring>*)NULL, str, std::wstring(1, delim));
    }
    /**
    * @ingroup utils
    */
    inline std::string toUpper(const std::string& str) {
        std::string copy(str);
        for (auto& c : copy) {
            c = static_cast<char>(toupper(c));
        }
        return copy;
    }
    /**
    * @ingroup utils
    */
    inline std::string toLower(const std::string& str) {
        std::string copy(str);
        for (auto& c : copy) {
            c = static_cast<char>(tolower(c));
        }
        return copy;
    }
    /**
    * @ingroup utils
    */
    inline std::string unicodeToUtf8(uint32_t chr) {
        std::string result;
        utf8::utf32to8(&chr, &chr + 1, std::back_inserter(result)); // Well I hope the chr won't get bigger than 0x7FFFFFFF
        return result;
    }
    /**
    * @ingroup utils
    */
    inline std::string wstrToUtf8(const std::wstring& wstr) {
        std::string str;
        utf8::utf16to8(&wstr[0], &wstr[0] + wstr.size(), std::back_inserter(str));
        return str;
    }
    /**
    * @ingroup utils
    */
    inline size_t wstrToUtf8Size(const std::wstring& wstr) {
        // Taken from utf16to8() func https://github.com/nemtrif/utfcpp/blob/master/source/utf8/checked.h
        auto start = &wstr[0];
        auto end = &wstr[0] + wstr.size();
        size_t result = 0;
        while (start != end) {
            uint32_t cp = utf8::internal::mask16(*start++);
            // Take care of surrogate pairs first
            if (utf8::internal::is_lead_surrogate(cp)) {
                if (start != end) {
                    const uint32_t trail_surrogate = utf8::internal::mask16(*start++);
                    if (utf8::internal::is_trail_surrogate(trail_surrogate))
                        cp = (cp << 10) + trail_surrogate + utf8::internal::SURROGATE_OFFSET;
                    else
                        throw utf8::invalid_utf16(static_cast<uint16_t>(trail_surrogate));
                }
                else
                    throw utf8::invalid_utf16(static_cast<uint16_t>(cp));

            }
            // Lone trail surrogate
            else if (utf8::internal::is_trail_surrogate(cp))
                throw utf8::invalid_utf16(static_cast<uint16_t>(cp));

            result++;
        }
        return result;
    }
    /**
    * @ingroup utils
    */
    inline std::wstring utf8ToWstr(const std::string& str) {
        std::wstring wstr;
        size_t dist = utf8::distance(&str[0], &str[0] + str.size());
        wstr.reserve(dist);
        utf8::utf8to16(&str[0], &str[0] + str.size(), std::back_inserter(wstr));
        return wstr;
    }
    /**
    * @ingroup utils
    */
    inline size_t utf8ToWstrSize(const std::string& str) {
        return utf8::distance(&str[0], &str[0] + str.size());
    }
    /**
    * @ingroup utils
    */
    template <class T>
    inline std::wstring valToWstring(T Value) {
        return utf8ToWstr(valToString(Value));
    }
    /**
    * @ingroup utils
    */
    template <class T>
    inline std::wstring valToWstring(T Value, unsigned int Dec) {
        return utf8ToWstr(valToString(Value, Dec));
    }
    /**
    * @ingroup utils
    */
    template<class T>
    inline uint32_t getNextChar(const T*& it, const T* end);
    /**
    * @ingroup utils
    */
    template<>
    inline uint32_t getNextChar(const char*& it, const char* end) {
        return utf8::next(it, end);
    }
    /**
    * @ingroup utils
    */
    template<>
    inline uint32_t getNextChar(const wchar_t*& it, const wchar_t* end) {
        (void)end;
        return *(it++);
    }
};
#endif
