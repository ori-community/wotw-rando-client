#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnparentTrailRenderer.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/TrailRenderer.h>

namespace app::classes::UnparentTrailRenderer {
    IL2CPP_REGISTER_METHOD(0x013AC5C0, void, Awake, (app::UnparentTrailRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AC880, void, OnPoolSpawned, (app::UnparentTrailRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::UnparentTrailRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ACAB0, void, OnEnable, (app::UnparentTrailRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ACC00, void, OnDisable, (app::UnparentTrailRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ACD50, app::IEnumerator*, ResetTrail, (app::TrailRenderer * trail))
    IL2CPP_REGISTER_METHOD(0x013ACEA0, void, OnDestroy, (app::UnparentTrailRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013ACFA0, void, Start, (app::UnparentTrailRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AD1A0, void, OnUpdate, (app::UnparentTrailRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UnparentTrailRenderer * this_ptr))
} // namespace app::classes::UnparentTrailRenderer
