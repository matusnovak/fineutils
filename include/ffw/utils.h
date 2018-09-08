/**
 * @defgroup utils utils - Utils functions and helpers
 * @brief Additional functions and helpers
 * @details This module provides additional helper methods such as
 * JavaScript like var (ffw::Any), JavaScript like Promise (ffw::Promise),
 * thread safe no allocation ring buffer, string functions, text wrapper, 
 * and a string tokenizer wiuth utf-8 support.
 * This library uses [utfcpp](https://github.com/nemtrif/utfcpp)
 */
#ifndef FFW_UTILS_MODULE
#define FFW_UTILS_MODULE
#include "utils/any.h"
#include "utils/promise.h"
#include "utils/ringbuffer.h"
#include "utils/stringmath.h"
#include "utils/textwrapper.h"
#include "utils/tokenizer.h"
#include "utils/path.h"
#endif
