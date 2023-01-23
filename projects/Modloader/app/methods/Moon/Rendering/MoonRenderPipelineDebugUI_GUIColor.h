#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_GUIColor__Boxed.h>
#include <Modloader/app/structs/Color.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineDebugUI_GUIColor {
    IL2CPP_REGISTER_METHOD(0x00119870, void, ctor, (app::MoonRenderPipelineDebugUI_GUIColor__Boxed * this_ptr, app::Color color))
    IL2CPP_REGISTER_METHOD(0x00119940, void, Dispose, (app::MoonRenderPipelineDebugUI_GUIColor__Boxed * this_ptr))
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineDebugUI_GUIColor
