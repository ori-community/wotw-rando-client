#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Colorful::Sharpen {
    IL2CPP_REGISTER_METHOD(0x03052960, bool, IRenderPostprocessor_get_enabled, (app::Sharpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030529C0, void, OnRenderImage, (app::Sharpen * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03052C10, void, IRenderPostprocessor_OnRenderImage, (app::Sharpen * this_ptr, app::PostProcessRenderContext* context))
    IL2CPP_REGISTER_METHOD(0x03052FB0, app::String*, GetShaderName, (app::Sharpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03053030, void, ctor, (app::Sharpen * this_ptr))
} // namespace app::classes::Colorful::Sharpen
