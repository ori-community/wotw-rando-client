#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SelfDestruct {
    IL2CPP_REGISTER_METHOD(0x00AB57E0, void, OnPoolSpawned, (app::SelfDestruct * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::SelfDestruct * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB57E0, void, Start, (app::SelfDestruct * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB57F0, void, FixedUpdate, (app::SelfDestruct * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, (app::SelfDestruct * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, (app::SelfDestruct * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::SelfDestruct * this_ptr))
} // namespace app::classes::SelfDestruct
