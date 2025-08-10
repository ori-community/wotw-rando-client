#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DirectionalBlur.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::DirectionalBlur {
    IL2CPP_REGISTER_METHOD(0x030424C0, void, OnRenderImage, app::DirectionalBlur* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x03042730, app::String*, GetShaderName, app::DirectionalBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030427B0, void, ctor, app::DirectionalBlur* this_ptr)
} // namespace app::classes::Colorful::DirectionalBlur
