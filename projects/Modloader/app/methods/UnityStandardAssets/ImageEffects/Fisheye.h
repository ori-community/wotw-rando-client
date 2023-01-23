#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Fisheye.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::Fisheye {
    IL2CPP_REGISTER_METHOD(0x02D58740, bool, CheckResources, (app::Fisheye * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D58790, void, OnRenderImage, (app::Fisheye * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D589D0, void, ctor, (app::Fisheye * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::Fisheye
