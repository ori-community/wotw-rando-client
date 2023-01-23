#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Blur.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::Blur {
    IL2CPP_REGISTER_METHOD(0x02515B20, app::Material*, get_material, (app::Blur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02515DA0, void, OnDisable, (app::Blur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02515ED0, void, Start, (app::Blur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02516100, void, FourTapCone, (app::Blur * this_ptr, app::RenderTexture* source, app::RenderTexture* dest, int32_t iteration))
    IL2CPP_REGISTER_METHOD(0x025162C0, void, DownSample4x, (app::Blur * this_ptr, app::RenderTexture* source, app::RenderTexture* dest))
    IL2CPP_REGISTER_METHOD(0x02516460, void, OnRenderImage, (app::Blur * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x025168F0, void, ctor, (app::Blur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::UnityStandardAssets::ImageEffects::Blur
