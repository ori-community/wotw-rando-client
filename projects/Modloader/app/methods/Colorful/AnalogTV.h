#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnalogTV.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::AnalogTV {
    IL2CPP_REGISTER_METHOD(0x0303D7C0, void, Update, (app::AnalogTV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303D850, void, OnRenderImage, (app::AnalogTV * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0303DAD0, app::String*, GetShaderName, (app::AnalogTV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303DB50, void, ctor, (app::AnalogTV * this_ptr))
} // namespace app::classes::Colorful::AnalogTV
