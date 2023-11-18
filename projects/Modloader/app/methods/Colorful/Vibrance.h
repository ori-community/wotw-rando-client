#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vibrance.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::Vibrance {
    IL2CPP_REGISTER_METHOD(0x03054B60, void, OnRenderImage, (app::Vibrance * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03054E50, app::String*, GetShaderName, (app::Vibrance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03054ED0, void, ctor, (app::Vibrance * this_ptr))
} // namespace app::classes::Colorful::Vibrance
