#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SCurveContrast.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::SCurveContrast {
    IL2CPP_REGISTER_METHOD(0x0304D5B0, void, OnRenderImage, (app::SCurveContrast * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0304D8D0, app::String*, GetShaderName, (app::SCurveContrast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304D950, void, ctor, (app::SCurveContrast * this_ptr))
} // namespace app::classes::Colorful::SCurveContrast
