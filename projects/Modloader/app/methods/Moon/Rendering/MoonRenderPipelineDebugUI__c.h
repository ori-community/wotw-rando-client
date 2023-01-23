#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_c.h>
#include <Modloader/app/structs/IRenderPostprocessor.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineDebugUI___c {
    IL2CPP_REGISTER_METHOD(0x007A2B90, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonRenderPipelineDebugUI_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007A2CD0, bool, _drawRenderOptions_b__83_0, (app::MoonRenderPipelineDebugUI_c * this_ptr, app::IRenderPostprocessor* p))
    IL2CPP_REGISTER_METHODINFO(0x0471CFF8, MoonRenderPipelineDebugUI_c__drawRenderOptions_b__83_0__MethodInfo)
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineDebugUI___c
