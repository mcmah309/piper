#include "piper_rust_bridge.hpp"
#include "piper.hpp"

std::unique_ptr<std::string> getVersion1() {
    return std::make_unique<std::string>(piper::getVersion());
    //return std::make_unique<std::string>("yolo");
}