#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaveDistortion.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::WaveDistortion {
    IL2CPP_REGISTER_METHOD(0x03055220, void, OnRenderImage, (app::WaveDistortion * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03055490, app::String*, GetShaderName, (app::WaveDistortion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03055510, void, ctor, (app::WaveDistortion * this_ptr))
} // namespace app::classes::Colorful::WaveDistortion
