#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Rendering::AsyncGPUReadback {
    IL2CPP_REGISTER_METHOD(0x02973830, void, SetUpScriptingRequest, (app::AsyncGPUReadbackRequest request, app::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * callback))
    IL2CPP_REGISTER_METHOD(0x02973890, app::AsyncGPUReadbackRequest, Request, (app::Texture * src, int32_t mip_index, app::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * callback))
    IL2CPP_REGISTER_METHOD(0x02973980, app::AsyncGPUReadbackRequest, Request_Internal_Texture_1, (app::Texture * src, int32_t mip_index))
    IL2CPP_REGISTER_METHOD(0x02973A10, void, Request_Internal_Texture_1_Injected, (app::Texture * src, int32_t mip_index, app::AsyncGPUReadbackRequest * ret))
}
