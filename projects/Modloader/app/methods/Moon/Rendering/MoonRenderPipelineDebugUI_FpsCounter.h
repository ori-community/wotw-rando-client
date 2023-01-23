#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_FpsCounter__Boxed.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineDebugUI_FpsCounter {
    IL2CPP_REGISTER_METHOD(0x00119820, void, increment, (app::MoonRenderPipelineDebugUI_FpsCounter__Boxed * this_ptr, float frame_time))
    IL2CPP_REGISTER_METHOD(0x00119830, void, compute, (app::MoonRenderPipelineDebugUI_FpsCounter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00119860, void, reset, (app::MoonRenderPipelineDebugUI_FpsCounter__Boxed * this_ptr))
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineDebugUI_FpsCounter
