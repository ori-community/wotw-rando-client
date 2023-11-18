#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Twirl.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::Twirl {
    IL2CPP_REGISTER_METHOD(0x02D6B310, void, OnRenderImage, (app::Twirl * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D6B390, void, ctor, (app::Twirl * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::Twirl
