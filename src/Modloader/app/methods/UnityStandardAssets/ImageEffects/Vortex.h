#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Vortex.h>

namespace app::classes::UnityStandardAssets::ImageEffects::Vortex {
    IL2CPP_REGISTER_METHOD(0x02D6B310, void, OnRenderImage, app::Vortex* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x02D6BE60, void, ctor, app::Vortex* this_ptr)
} // namespace app::classes::UnityStandardAssets::ImageEffects::Vortex
