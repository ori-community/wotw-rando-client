#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/WindImpactEffectSpawner.h>

namespace app::classes::WindImpactEffectSpawner {
    IL2CPP_REGISTER_METHOD(0x005764F0, void, Awake, app::WindImpactEffectSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00576E60, bool, TrySpawnHit, app::WindImpactEffectSpawner* this_ptr, app::RaycastHit hit)
    IL2CPP_REGISTER_METHOD(0x00577360, void, FixedUpdate, app::WindImpactEffectSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00577F10, void, ctor, app::WindImpactEffectSpawner* this_ptr)
} // namespace app::classes::WindImpactEffectSpawner
