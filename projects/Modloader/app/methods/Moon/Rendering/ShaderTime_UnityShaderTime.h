#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CommandBuffer.h>

namespace app::classes::Moon::Rendering::ShaderTime_UnityShaderTime {
    IL2CPP_REGISTER_METHOD(0x00EBC550, void, setTimeConstants, (app::CommandBuffer * cb, float time, float delta_time, float smooth_delta_time))
    IL2CPP_REGISTER_METHOD(0x00EBC9E0, float, cosf, (float f))
    IL2CPP_REGISTER_METHOD(0x00EBCA80, float, sinf, (float f))
    IL2CPP_REGISTER_METHOD(0x00EBCB20, float, fmodf, (float f, float mod))
} // namespace app::classes::Moon::Rendering::ShaderTime_UnityShaderTime
