#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::Rendering::RenderPipelineManager {
    IL2CPP_REGISTER_METHOD(0x02523610, app::IRenderPipeline*, get_currentPipeline, ())
    IL2CPP_REGISTER_METHOD(0x02523690, void, set_currentPipeline, (app::IRenderPipeline * value))
    IL2CPP_REGISTER_METHOD(0x02523720, void, CleanupRenderPipeline, ())
    IL2CPP_REGISTER_METHOD(0x02523970, void, DoRenderLoop_Internal, (app::IRenderPipelineAsset * pipe, app::Camera__Array* cameras, void* loop_ptr))
    IL2CPP_REGISTER_METHOD(0x02523BB0, void, PrepareRenderPipeline, (app::IRenderPipelineAsset * pipe))
} // namespace app::classes::UnityEngine::Experimental::Rendering::RenderPipelineManager
