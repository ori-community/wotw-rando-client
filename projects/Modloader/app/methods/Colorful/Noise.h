#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Noise.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::Noise {
    IL2CPP_REGISTER_METHOD(0x0304C090, void, Update, (app::Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304C120, void, OnRenderImage, (app::Noise * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0304C350, app::String*, GetShaderName, (app::Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304C3D0, void, ctor, (app::Noise * this_ptr))
} // namespace app::classes::Colorful::Noise
