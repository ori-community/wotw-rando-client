#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Letterbox.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::Letterbox {
    IL2CPP_REGISTER_METHOD(0x03048570, void, OnRenderImage, app::Letterbox* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x030488E0, app::String*, GetShaderName, app::Letterbox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03048960, void, ctor, app::Letterbox* this_ptr)
} // namespace app::classes::Colorful::Letterbox
