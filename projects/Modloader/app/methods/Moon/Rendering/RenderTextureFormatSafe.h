#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::RenderTextureFormatSafe {
    IL2CPP_REGISTER_METHOD(0x00EB3460, app::RenderTextureFormat__Enum, getFormat, (app::RenderTextureFormat__Enum format, app::RenderTextureFormat__Enum fallback))
    IL2CPP_REGISTER_METHOD(0x00EB3490, void, cctor, ())
} // namespace app::classes::Moon::Rendering::RenderTextureFormatSafe
