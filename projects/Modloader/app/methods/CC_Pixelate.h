#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CC_Pixelate.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_Pixelate {
    IL2CPP_REGISTER_METHOD(0x03194C20, void, OnRenderImage, (app::CC_Pixelate * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03194DA0, void, ctor, (app::CC_Pixelate * this_ptr))
} // namespace app::classes::CC_Pixelate
