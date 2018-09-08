#include <ffw/utils/path.h>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Testing pathParse #1") {
    std::string path = "C:/Hello/World.txt";
    auto info = ffw::pathParse(path);
    REQUIRE("C:/Hello/" == info.dir);
    REQUIRE("World" == info.base);
    REQUIRE("txt" == info.ext);
}
    
TEST_CASE("Testing pathParse #2") {
    std::string path = "C:/Hello/World";
    auto info = ffw::pathParse(path);
    REQUIRE("C:/Hello/" == info.dir);
    REQUIRE("World" == info.base);
    REQUIRE("" == info.ext);
}

TEST_CASE("Testing pathParse #3") {
    std::string path = "C:/Hello/";
    auto info = ffw::pathParse(path);
    REQUIRE("C:/Hello/" == info.dir);
    REQUIRE("" == info.base);
    REQUIRE("" == info.ext);
}

TEST_CASE("Testing pathParse #4") {
    std::string path = "C:/Hello/.txt";
    auto info = ffw::pathParse(path);
    REQUIRE("C:/Hello/" == info.dir);
    REQUIRE(".txt" == info.base);
    REQUIRE("" == info.ext);
}

TEST_CASE("Testing pathParse #5") {
    std::string path = "C:";
    auto info = ffw::pathParse(path);
    REQUIRE("C:" == info.dir);
    REQUIRE("" == info.base);
    REQUIRE("" == info.ext);
}

TEST_CASE("Testing pathParse #6") {
    std::string path = "/Hello/";
    auto info = ffw::pathParse(path);
    REQUIRE("/Hello/" == info.dir);
    REQUIRE("" == info.base);
    REQUIRE("" == info.ext);
}

TEST_CASE("Testing pathParse #7") {
    std::string path = "./Hello";
    auto info = ffw::pathParse(path);
    REQUIRE("./" == info.dir);
    REQUIRE("Hello" == info.base);
    REQUIRE("" == info.ext);
}

TEST_CASE("Testing pathParse #8") {
    std::string path = "../../Hello/";
    auto info = ffw::pathParse(path);
    REQUIRE("../../Hello/" == info.dir);
    REQUIRE("" == info.base);
    REQUIRE("" == info.ext);
}

TEST_CASE("Testing pathParse #9") {
    std::string path = "image.png";
    auto info  = ffw::pathParse(path);
    REQUIRE("" == info.dir);
    REQUIRE("image" == info.base);
    REQUIRE("png" == info.ext);
}

TEST_CASE("Testing pathParse #10") {
    std::string path = "C:/Hello/world\\file.txt";
    auto info = ffw::pathParse(path);
    REQUIRE("C:/Hello/world\\" == info.dir);
    REQUIRE("file" == info.base);
    REQUIRE("txt" == info.ext);
}

TEST_CASE("Testing pathJoin #1") {
    const auto path = ffw::pathJoin({ "hello", "world", "this", "is", "example.exe" });
#ifdef FFW_WINDOWS
    REQUIRE(path == "hello\\world\\this\\is\\example.exe");
#else
    REQUIRE(path == "hello/world/this/is/example.exe");
#endif
}
