#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreaseShading.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::CreaseShading {
    IL2CPP_REGISTER_METHOD(0x0251F850, bool, CheckResources, app::CreaseShading* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0251F8D0, void, OnRenderImage, app::CreaseShading* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x0251FEF0, void, ctor, app::CreaseShading* this_ptr)
} // namespace app::classes::UnityStandardAssets::ImageEffects::CreaseShading
