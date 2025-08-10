#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Levels.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::Levels {
    IL2CPP_REGISTER_METHOD(0x03048980, void, OnRenderImage, app::Levels* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x030491D0, app::String*, GetShaderName, app::Levels* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03049250, void, ctor, app::Levels* this_ptr)
} // namespace app::classes::Colorful::Levels
