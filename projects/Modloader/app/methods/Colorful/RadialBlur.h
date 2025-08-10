#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RadialBlur.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::RadialBlur {
    IL2CPP_REGISTER_METHOD(0x0304D1E0, void, OnRenderImage, app::RadialBlur* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x0304D4F0, app::String*, GetShaderName, app::RadialBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0304D570, void, ctor, app::RadialBlur* this_ptr)
} // namespace app::classes::Colorful::RadialBlur
