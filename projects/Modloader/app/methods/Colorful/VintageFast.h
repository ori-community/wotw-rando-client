#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VintageFast.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::Colorful::VintageFast {
    IL2CPP_REGISTER_METHOD(0x03055010, void, OnRenderImage, (app::VintageFast * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::VintageFast * this_ptr))
} // namespace app::classes::Colorful::VintageFast
