#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NoiseAndGrain.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::UnityStandardAssets::ImageEffects::NoiseAndGrain {
    IL2CPP_REGISTER_METHOD(0x02D5B2F0, bool, CheckResources, (app::NoiseAndGrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5B370, void, OnRenderImage, (app::NoiseAndGrain * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D5C030, void, DrawNoiseQuadGrid, (app::RenderTexture * source, app::RenderTexture* dest, app::Material* fx_material, app::Texture2D* noise, int32_t pass_nr))
    IL2CPP_REGISTER_METHOD(0x02D5C670, void, ctor, (app::NoiseAndGrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5C700, void, cctor, ())
} // namespace app::classes::UnityStandardAssets::ImageEffects::NoiseAndGrain
