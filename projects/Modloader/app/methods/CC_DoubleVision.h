#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CC_DoubleVision.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_DoubleVision {
    IL2CPP_REGISTER_METHOD(0x03193140, void, OnRenderImage, (app::CC_DoubleVision * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03042E90, void, ctor, (app::CC_DoubleVision * this_ptr))
} // namespace app::classes::CC_DoubleVision
