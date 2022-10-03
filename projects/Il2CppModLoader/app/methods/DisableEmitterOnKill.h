#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DisableEmitterOnKill {
    IL2CPP_REGISTER_METHOD(0x00B950D0, void, Awake, (app::DisableEmitterOnKill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B951F0, void, OnPoolSpawned, (app::DisableEmitterOnKill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B952C0, void, OnKill, (app::DisableEmitterOnKill * this_ptr, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DisableEmitterOnKill * this_ptr))
} // namespace app::classes::DisableEmitterOnKill
