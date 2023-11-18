#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Bloom_1.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::CinematicEffects::Bloom {
    IL2CPP_REGISTER_METHOD(0x02500450, app::Shader*, get_shader, (app::Bloom_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02500550, app::Material*, get_material, (app::Bloom_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02500620, void, OnEnable, (app::Bloom_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025006F0, void, OnDisable, (app::Bloom_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025007E0, void, OnRenderImage, (app::Bloom_1 * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x025008A0, void, ctor, (app::Bloom_1 * this_ptr))
} // namespace app::classes::UnityStandardAssets::CinematicEffects::Bloom
