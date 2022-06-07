#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WindImpactEffectSpawner {
    IL2CPP_REGISTER_METHOD(0x005764F0, void, Awake, (app::WindImpactEffectSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00576E60, bool, TrySpawnHit, (app::WindImpactEffectSpawner * this_ptr, app::RaycastHit hit))
    IL2CPP_REGISTER_METHOD(0x00577360, void, FixedUpdate, (app::WindImpactEffectSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00577F10, void, ctor, (app::WindImpactEffectSpawner * this_ptr))
}
