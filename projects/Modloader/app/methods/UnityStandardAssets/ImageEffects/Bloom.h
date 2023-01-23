#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Bloom.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Color.h>

namespace app::classes::UnityStandardAssets::ImageEffects::Bloom {
    IL2CPP_REGISTER_METHOD(0x025111D0, bool, CheckResources, (app::Bloom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02511280, void, OnRenderImage, (app::Bloom * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x025128C0, void, AddTo, (app::Bloom * this_ptr, float intensity_, app::RenderTexture* from, app::RenderTexture* to))
    IL2CPP_REGISTER_METHOD(0x02512A90, void, BlendFlares, (app::Bloom * this_ptr, app::RenderTexture* from, app::RenderTexture* to))
    IL2CPP_REGISTER_METHOD(0x02512F60, void, BrightFilter_1, (app::Bloom * this_ptr, float thresh, app::RenderTexture* from, app::RenderTexture* to))
    IL2CPP_REGISTER_METHOD(0x025130F0, void, BrightFilter_2, (app::Bloom * this_ptr, app::Color thresh_color, app::RenderTexture* from, app::RenderTexture* to))
    IL2CPP_REGISTER_METHOD(0x02513270, void, Vignette, (app::Bloom * this_ptr, float amount, app::RenderTexture* from, app::RenderTexture* to))
    IL2CPP_REGISTER_METHOD(0x02513570, void, ctor, (app::Bloom * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::Bloom
