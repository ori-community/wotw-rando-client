#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UWPIdentityUI {
    IL2CPP_REGISTER_METHOD(0x013DDC10, void, OnEnable, (app::UWPIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013DDCB0, void, OnDisable, (app::UWPIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013DDD50, void, Update, (app::UWPIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UWPIdentityUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
