#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Wiggle.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::Wiggle {
    IL2CPP_REGISTER_METHOD(0x030557E0, void, Update, (app::Wiggle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03055880, void, OnRenderImage, (app::Wiggle * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03055A90, app::String*, GetShaderName, (app::Wiggle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03055B10, void, ctor, (app::Wiggle * this_ptr))
} // namespace app::classes::Colorful::Wiggle
