#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrainyBlur.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::GrainyBlur {
    IL2CPP_REGISTER_METHOD(0x03046460, void, OnRenderImage, (app::GrainyBlur * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03046710, app::String*, GetShaderName, (app::GrainyBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03046790, void, ctor, (app::GrainyBlur * this_ptr))
} // namespace app::classes::Colorful::GrainyBlur
