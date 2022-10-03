#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::Tonemapping {
    IL2CPP_REGISTER_METHOD(0x02D68DC0, bool, CheckResources, (app::Tonemapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D69010, float, UpdateCurve, (app::Tonemapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D69490, void, OnDisable, (app::Tonemapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D69630, bool, CreateInternalRenderTexture, (app::Tonemapping * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D69850, void, OnRenderImage, (app::Tonemapping * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D6A4E0, void, ctor, (app::Tonemapping * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::Tonemapping
