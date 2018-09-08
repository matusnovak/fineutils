(window.webpackJsonp=window.webpackJsonp||[]).push([[32],{190:function(t,e,s){"use strict";s.r(e);var r=s(0),a=Object(r.a)({},function(){var t=this.$createElement,e=this._self._c||t;return e("div",{staticClass:"content"},[this._m(0),this._v(" "),e("p",[e("strong",[e("router-link",{attrs:{to:"./config_8h.html"}},[this._v("Go to the documentation of this file.")])],1),this._v("\nSource: "),e("code",[this._v("include/ffw/utils/config.h")])]),this._v(" "),this._m(1)])},[function(){var t=this.$createElement,e=this._self._c||t;return e("h1",{attrs:{id:"config-h-file-reference"}},[e("a",{staticClass:"header-anchor",attrs:{href:"#config-h-file-reference","aria-hidden":"true"}},[this._v("#")]),this._v(" config.h File Reference")])},function(){var t=this,e=t.$createElement,s=t._self._c||e;return s("div",{staticClass:"language-cpp extra-class"},[s("pre",{pre:!0,attrs:{class:"language-cpp"}},[s("code",[s("span",{attrs:{class:"token comment"}},[t._v("/*** This file is part of FineFramework project ***/")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("ifndef")]),t._v(" FFW_GRAPHICS_CONFIG")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_GRAPHICS_CONFIG")]),t._v("\n\n"),s("span",{attrs:{class:"token comment"}},[t._v("// Using Visual Studio")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("ifdef")]),t._v(" _MSC_VER")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_WINDOWS_MSVC 1")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_WINDOWS 1")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("pragma")]),t._v(" warning( disable: 4251 )")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n\n"),s("span",{attrs:{class:"token comment"}},[t._v("// Using MinGW")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("ifdef")]),t._v(" __MINGW32__")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_WINDOWS_MINGW 1")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_WINDOWS 1")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n\n"),s("span",{attrs:{class:"token comment"}},[t._v("// Using Linux GCC")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("ifdef")]),t._v(" __linux__")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_LINUX_GCC 1")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_LINUX 1")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n\n"),s("span",{attrs:{class:"token comment"}},[t._v("// Using MAX OS X")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("if")]),t._v(" defined(__APPLE__) && defined(__MACH__)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_OSX_CLANG 1")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_OSX 1")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("if")]),t._v(" !defined(FFW_WINDOWS_MSVC) && !defined(FFW_WINDOWS_MINGW) && !defined(FFW_LINUX_GCC) && !defined(FFW_OSX_CLANG)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("error")]),t._v(" Please use Visual Studio, MinGW, Linux GCC, or OS X Clang to compile FineFramework!")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("if")]),t._v(" !defined(FFW_WINDOWS) && !defined(FFW_LINUX) && !defined(FFW_OSX)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("error")]),t._v(" Target platform not selected!")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n\n"),s("span",{attrs:{class:"token comment"}},[t._v("// FineFramework export for Windows")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("if")]),t._v(" defined(FFW_WINDOWS)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("ifdef")]),t._v(" FFW_EXPORTS")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_API __declspec(dllexport)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("else")])]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_API __declspec(dllimport)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("else")])]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" FFW_API")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("if")]),t._v(" !defined(FFW_API)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("error")]),t._v(" FFW_API dllexport not defined!")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("if")]),t._v(" !defined(HAS_NOEXCEPT)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("if")]),t._v(" defined(__clang__)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("if")]),t._v(" __has_feature(cxx_noexcept)")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" HAS_NOEXCEPT")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("else")])]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("if")]),t._v(" defined(__GXX_EXPERIMENTAL_CXX0X__) && __GNUC__ * 10 + __GNUC_MINOR__ >= 46 || defined(_MSC_FULL_VER) && _MSC_FULL_VER >= 190023026")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" HAS_NOEXCEPT")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("ifdef")]),t._v(" HAS_NOEXCEPT")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" NOEXCEPT noexcept")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("else")])]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("define")]),t._v(" NOEXCEPT")]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n\n"),s("span",{attrs:{class:"token macro property"}},[t._v("#"),s("span",{attrs:{class:"token directive keyword"}},[t._v("endif")])]),t._v("\n")])])])}],!1,null,null,null);a.options.__file="config_8h_source.md";e.default=a.exports}}]);