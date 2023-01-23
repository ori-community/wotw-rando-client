#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vintage.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::Colorful::Vintage {
    IL2CPP_REGISTER_METHOD(0x03054EF0, void, OnRenderImage, (app::Vintage * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0136E930, void, ctor, (app::Vintage * this_ptr))
} // namespace app::classes::Colorful::Vintage
