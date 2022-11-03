#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientObscurance {
    IL2CPP_REGISTER_METHOD(0x02D60F40, bool, CheckResources, (app::ScreenSpaceAmbientObscurance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D60F90, void, OnDisable, (app::ScreenSpaceAmbientObscurance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D61070, void, OnRenderImage, (app::ScreenSpaceAmbientObscurance * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D61A80, void, ctor, (app::ScreenSpaceAmbientObscurance * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientObscurance
