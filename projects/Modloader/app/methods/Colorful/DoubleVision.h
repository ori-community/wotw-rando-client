#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Colorful::DoubleVision {
    IL2CPP_REGISTER_METHOD(0x03042B60, void, OnRenderImage, (app::DoubleVision * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03042E10, app::String*, GetShaderName, (app::DoubleVision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03042E90, void, ctor, (app::DoubleVision * this_ptr))
} // namespace app::classes::Colorful::DoubleVision
