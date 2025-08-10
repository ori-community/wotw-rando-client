#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BloomAndFlares.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::BloomAndFlares {
    IL2CPP_REGISTER_METHOD(0x02513620, bool, CheckResources, app::BloomAndFlares* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02513730, void, OnRenderImage, app::BloomAndFlares* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x02514740, void, AddTo, app::BloomAndFlares* this_ptr, float intensity_, app::RenderTexture* from, app::RenderTexture* to)
    IL2CPP_REGISTER_METHOD(0x025148B0, void, BlendFlares, app::BloomAndFlares* this_ptr, app::RenderTexture* from, app::RenderTexture* to)
    IL2CPP_REGISTER_METHOD(
        0x02514D20,
        void,
        BrightFilter,
        app::BloomAndFlares* this_ptr,
        float thresh,
        float use_alpha_as_mask,
        app::RenderTexture* from,
        app::RenderTexture* to
    )
    IL2CPP_REGISTER_METHOD(0x02515020, void, Vignette, app::BloomAndFlares* this_ptr, float amount, app::RenderTexture* from, app::RenderTexture* to)
    IL2CPP_REGISTER_METHOD(0x02515220, void, ctor, app::BloomAndFlares* this_ptr)
} // namespace app::classes::UnityStandardAssets::ImageEffects::BloomAndFlares
