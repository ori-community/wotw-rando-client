#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonRenderPipelineSettings.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineSettings {
    IL2CPP_REGISTER_METHOD(0x007A3100, void, ctor, (app::MoonRenderPipelineSettings * this_ptr))
}
