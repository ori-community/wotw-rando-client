#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CC_Grayscale.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_Grayscale {
    IL2CPP_REGISTER_METHOD(0x03193990, void, OnRenderImage, (app::CC_Grayscale * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03193C80, void, ctor, (app::CC_Grayscale * this_ptr))
} // namespace app::classes::CC_Grayscale
