#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/VignetteAndChromaticAberration.h>

namespace app::classes::UnityStandardAssets::ImageEffects::VignetteAndChromaticAberration {
    IL2CPP_REGISTER_METHOD(0x02D6B3C0, bool, CheckResources, app::VignetteAndChromaticAberration* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D6B440,
        void,
        OnRenderImage,
        app::VignetteAndChromaticAberration* this_ptr,
        app::RenderTexture* source,
        app::RenderTexture* destination
    )
    IL2CPP_REGISTER_METHOD(0x02D6BE20, void, ctor, app::VignetteAndChromaticAberration* this_ptr)
} // namespace app::classes::UnityStandardAssets::ImageEffects::VignetteAndChromaticAberration
