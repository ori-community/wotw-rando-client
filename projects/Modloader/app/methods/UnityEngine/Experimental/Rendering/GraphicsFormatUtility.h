#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GraphicsFormat__Enum.h>
#include <Modloader/app/structs/TextureFormat__Enum.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>

namespace app::classes::UnityEngine::Experimental::Rendering::GraphicsFormatUtility {
    IL2CPP_REGISTER_METHOD(0x02434390, app::GraphicsFormat__Enum, GetGraphicsFormat, (app::TextureFormat__Enum format, bool is_s_r_g_b))
    IL2CPP_REGISTER_METHOD(0x02434390, app::GraphicsFormat__Enum, GetGraphicsFormat_Native_TextureFormat, (app::TextureFormat__Enum format, bool is_s_r_g_b))
    IL2CPP_REGISTER_METHOD(0x024343F0, bool, IsSRGBFormat, (app::GraphicsFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02434440, app::RenderTextureFormat__Enum, GetRenderTextureFormat, (app::GraphicsFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02434490, bool, IsCompressedTextureFormat, (app::TextureFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x024344E0, bool, IsCrunchFormat, (app::TextureFormat__Enum format))
} // namespace app::classes::UnityEngine::Experimental::Rendering::GraphicsFormatUtility
