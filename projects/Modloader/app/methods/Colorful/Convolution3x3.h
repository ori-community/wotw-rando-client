#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Convolution3x3.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::Convolution3x3 {
    IL2CPP_REGISTER_METHOD(0x03041A40, void, OnRenderImage, (app::Convolution3x3 * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03041F70, app::String*, GetShaderName, (app::Convolution3x3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03041FF0, void, ctor, (app::Convolution3x3 * this_ptr))
} // namespace app::classes::Colorful::Convolution3x3
