#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Strokes.h>

namespace app::classes::Colorful::Strokes {
    IL2CPP_REGISTER_METHOD(0x03053D80, void, OnRenderImage, app::Strokes* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x03054110, app::String*, GetShaderName, app::Strokes* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03054190, void, ctor, app::Strokes* this_ptr)
} // namespace app::classes::Colorful::Strokes
