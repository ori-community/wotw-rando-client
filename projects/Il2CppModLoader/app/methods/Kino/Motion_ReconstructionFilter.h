#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Kino::Motion_ReconstructionFilter {
    IL2CPP_REGISTER_METHOD(0x01228630, void, ctor, (app::Motion_ReconstructionFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01228880, void, Release, (app::Motion_ReconstructionFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01228970, void, ProcessImage, (app::Motion_ReconstructionFilter * this_ptr, float shutter_angle, int32_t sample_count, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x01229110, bool, CheckTextureFormatSupport, (app::Motion_ReconstructionFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01229150, app::RenderTexture*, GetTemporaryRT, (app::Motion_ReconstructionFilter * this_ptr, app::Texture* source, int32_t divider, app::RenderTextureFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01229280, void, ReleaseTemporaryRT, (app::Motion_ReconstructionFilter * this_ptr, app::RenderTexture* rt))
} // namespace app::classes::Kino::Motion_ReconstructionFilter
