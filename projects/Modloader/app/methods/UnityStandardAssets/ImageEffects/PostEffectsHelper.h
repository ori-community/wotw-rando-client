#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PostEffectsHelper.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::PostEffectsHelper {
    IL2CPP_REGISTER_METHOD(0x02D5EF20, void, OnRenderImage, (app::PostEffectsHelper * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D5EFC0, void, DrawLowLevelPlaneAlignedWithCamera, (float dist, app::RenderTexture* source, app::RenderTexture* dest, app::Material* material, app::Camera* camera_for_projection_matrix))
    IL2CPP_REGISTER_METHOD(0x02D5F570, void, DrawBorder, (app::RenderTexture * dest, app::Material* material))
    IL2CPP_REGISTER_METHOD(0x02D5FA80, void, DrawLowLevelQuad, (float x1, float x2, float y1, float y2, app::RenderTexture* source, app::RenderTexture* dest, app::Material* material))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PostEffectsHelper * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::PostEffectsHelper
