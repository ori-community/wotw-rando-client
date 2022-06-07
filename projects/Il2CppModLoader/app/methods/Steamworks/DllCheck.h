#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::DllCheck {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Test, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DllCheck * this_ptr))
}
