#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CC_FastVignette.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_FastVignette {
    IL2CPP_REGISTER_METHOD(0x03193430, void, OnRenderImage, (app::CC_FastVignette * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03193640, void, ctor, (app::CC_FastVignette * this_ptr))
} // namespace app::classes::CC_FastVignette
