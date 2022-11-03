#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::RenderTextureExtensions {
    IL2CPP_REGISTER_METHOD(0x00EB3120, int32_t, bpp, (app::RenderTextureFormat__Enum format))
    IL2CPP_REGISTER_METHODINFO(0x0478C1A0, RenderTextureExtensions_bpp__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EB3320, int32_t, vramSize_1, (app::RenderTextureDescriptor desc))
    IL2CPP_REGISTER_METHOD(0x00EB3360, int32_t, vramSize_2, (app::RenderTexture * rt))
} // namespace app::classes::Moon::Rendering::RenderTextureExtensions
