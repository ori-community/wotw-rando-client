#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LimitedLifetime {
    IL2CPP_REGISTER_METHOD(0x00FA4B90, void, OnPoolSpawned, (app::LimitedLifetime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::LimitedLifetime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4BA0, void, OnEnable, (app::LimitedLifetime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4CF0, void, OnDisable, (app::LimitedLifetime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4E40, void, Start, (app::LimitedLifetime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4E50, void, SetRemainingLifetime, (app::LimitedLifetime * this_ptr, float lifetime))
    IL2CPP_REGISTER_METHOD(0x00FA4E60, void, KillNextFrame, (app::LimitedLifetime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4E70, void, OnUpdate, (app::LimitedLifetime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4F90, void, CallDestroy, (app::LimitedLifetime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, (app::LimitedLifetime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, (app::LimitedLifetime * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00FA50A0, void, ctor, (app::LimitedLifetime * this_ptr))
}
