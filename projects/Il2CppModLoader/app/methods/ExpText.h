#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ExpText {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (app::ExpText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (app::ExpText * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_Amount, (app::ExpText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00987150, void, set_Amount, (app::ExpText * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x009872E0, void, FixedUpdate, (app::ExpText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00987400, void, OnPoolSpawned, (app::ExpText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::ExpText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::ExpText * this_ptr))
}
