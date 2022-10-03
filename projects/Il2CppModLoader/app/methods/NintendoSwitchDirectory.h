#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NintendoSwitchDirectory {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Exists, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CreateDirectory, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NintendoSwitchDirectory * this_ptr))
} // namespace app::classes::NintendoSwitchDirectory
