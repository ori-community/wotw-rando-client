#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Grdk::Logger {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Log, (app::String * message))
}
