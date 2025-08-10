#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmbientOcclusion_PropertyObserver__Boxed.h>
#include <Modloader/app/structs/AmbientOcclusion_Settings.h>
#include <Modloader/app/structs/Camera.h>

namespace app::classes::UnityStandardAssets::CinematicEffects::AmbientOcclusion_PropertyObserver {
    IL2CPP_REGISTER_METHOD(
        0x001F0670,
        bool,
        CheckNeedsReset,
        app::AmbientOcclusion_PropertyObserver__Boxed* this_ptr,
        app::AmbientOcclusion_Settings* setting,
        app::Camera* camera
    )
    IL2CPP_REGISTER_METHOD(
        0x001F0680,
        void,
        Update,
        app::AmbientOcclusion_PropertyObserver__Boxed* this_ptr,
        app::AmbientOcclusion_Settings* setting,
        app::Camera* camera
    )
} // namespace app::classes::UnityStandardAssets::CinematicEffects::AmbientOcclusion_PropertyObserver
