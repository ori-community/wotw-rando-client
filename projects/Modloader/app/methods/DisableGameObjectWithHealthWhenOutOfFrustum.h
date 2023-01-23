#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DisableGameObjectWithHealthWhenOutOfFrustum.h>
#include <Modloader/app/structs/Bounds.h>

namespace app::classes::DisableGameObjectWithHealthWhenOutOfFrustum {
    IL2CPP_REGISTER_METHOD(0x00B97FC0, void, OnFrustumEnter, (app::DisableGameObjectWithHealthWhenOutOfFrustum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98060, void, OnFrustumExit, (app::DisableGameObjectWithHealthWhenOutOfFrustum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_InsideFrustum, (app::DisableGameObjectWithHealthWhenOutOfFrustum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98120, app::Bounds, get_Bounds, (app::DisableGameObjectWithHealthWhenOutOfFrustum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (app::DisableGameObjectWithHealthWhenOutOfFrustum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98140, void, Awake, (app::DisableGameObjectWithHealthWhenOutOfFrustum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B981E0, void, OnDestroy, (app::DisableGameObjectWithHealthWhenOutOfFrustum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98280, void, Start, (app::DisableGameObjectWithHealthWhenOutOfFrustum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, (app::DisableGameObjectWithHealthWhenOutOfFrustum * this_ptr))
} // namespace app::classes::DisableGameObjectWithHealthWhenOutOfFrustum
