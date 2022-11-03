#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineManager {
    IL2CPP_REGISTER_METHOD(0x007A2E40, app::MoonRenderPipelineAsset*, get_currentAsset, ())
    IL2CPP_REGISTER_METHOD(0x007A2FE0, void, set_currentAsset, (app::MoonRenderPipelineAsset * value))
    IL2CPP_REGISTER_METHOD(0x007A3030, app::MoonRenderPipeline*, get_currentPipeline, ())
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineManager
