#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::FXAA {
    IL2CPP_REGISTER_METHOD(0x0078A1A0, void, OnEnable, (app::FXAA_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078A240, void, OnDisable, (app::FXAA_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078A290, void, OnRenderImage, (app::FXAA_1 * this_ptr, app::RenderTexture* src, app::RenderTexture* dest))
    IL2CPP_REGISTER_METHOD(0x0078A9C0, void, IRenderPostprocessor_OnRenderImage, (app::FXAA_1 * this_ptr, app::PostProcessRenderContext* context))
    IL2CPP_REGISTER_METHOD(0x0078B650, void, AllocateRenderTextures, (app::FXAA_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078BBA0, void, ReleaseRenderTextures, (app::FXAA_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078BD30, void, AllocateComputeBuffers, (app::FXAA_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078A240, void, ReleaseComputeBuffers, (app::FXAA_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078C0F0, void, CheckForResolutionChanged, (app::FXAA_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078C490, void, CheckForParamsChanged, (app::FXAA_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078C5F0, void, ctor, (app::FXAA_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078C8D0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x007893E0, bool, IRenderPostprocessor_get_enabled, (app::FXAA_1 * this_ptr))
} // namespace app::classes::Moon::Rendering::FXAA
