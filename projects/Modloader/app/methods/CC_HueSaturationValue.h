#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CC_HueSaturationValue.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_HueSaturationValue {
    IL2CPP_REGISTER_METHOD(0x03193CB0, void, OnRenderImage, (app::CC_HueSaturationValue * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CC_HueSaturationValue * this_ptr))
} // namespace app::classes::CC_HueSaturationValue
