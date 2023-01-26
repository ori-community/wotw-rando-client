#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HueSaturationValue.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::HueSaturationValue {
    IL2CPP_REGISTER_METHOD(0x030474F0, void, OnRenderImage, (app::HueSaturationValue * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03047C90, app::String*, GetShaderName, (app::HueSaturationValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HueSaturationValue * this_ptr))
} // namespace app::classes::Colorful::HueSaturationValue
