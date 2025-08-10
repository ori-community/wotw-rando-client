#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContrastGain.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::ContrastGain {
    IL2CPP_REGISTER_METHOD(0x03041760, void, OnRenderImage, app::ContrastGain* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x030418E0, app::String*, GetShaderName, app::ContrastGain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5D320, void, ctor, app::ContrastGain* this_ptr)
} // namespace app::classes::Colorful::ContrastGain
