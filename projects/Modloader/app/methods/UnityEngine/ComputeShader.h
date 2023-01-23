#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ComputeShader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/ComputeBuffer.h>

namespace app::classes::UnityEngine::ComputeShader {
    IL2CPP_REGISTER_METHOD(0x0242A6B0, int32_t, FindKernel, (app::ComputeShader * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0242A710, void, SetFloat, (app::ComputeShader * this_ptr, int32_t name_i_d, float val))
    IL2CPP_REGISTER_METHOD(0x0242A780, void, SetInt, (app::ComputeShader * this_ptr, int32_t name_i_d, int32_t val))
    IL2CPP_REGISTER_METHOD(0x0242A7F0, void, SetVector, (app::ComputeShader * this_ptr, int32_t name_i_d, app::Vector4 val))
    IL2CPP_REGISTER_METHOD(0x0242A860, void, SetFloatArray, (app::ComputeShader * this_ptr, int32_t name_i_d, app::Single__Array* values))
    IL2CPP_REGISTER_METHOD(0x0242A8D0, void, SetTexture_1, (app::ComputeShader * this_ptr, int32_t kernel_index, int32_t name_i_d, app::Texture* texture, int32_t mip_level))
    IL2CPP_REGISTER_METHOD(0x0242A950, void, SetBuffer, (app::ComputeShader * this_ptr, int32_t kernel_index, int32_t name_i_d, app::ComputeBuffer* buffer))
    IL2CPP_REGISTER_METHOD(0x0242A9D0, void, Dispatch, (app::ComputeShader * this_ptr, int32_t kernel_index, int32_t thread_groups_x, int32_t thread_groups_y, int32_t thread_groups_z))
    IL2CPP_REGISTER_METHOD(0x0242AA50, void, Internal_DispatchIndirect, (app::ComputeShader * this_ptr, int32_t kernel_index, app::ComputeBuffer* args_buffer, uint32_t args_offset))
    IL2CPP_REGISTER_METHOD(0x0242A860, void, SetFloats, (app::ComputeShader * this_ptr, int32_t name_i_d, app::Single__Array* values))
    IL2CPP_REGISTER_METHOD(0x0242AAD0, void, SetTexture_2, (app::ComputeShader * this_ptr, int32_t kernel_index, int32_t name_i_d, app::Texture* texture))
    IL2CPP_REGISTER_METHOD(0x0242AB60, void, DispatchIndirect, (app::ComputeShader * this_ptr, int32_t kernel_index, app::ComputeBuffer* args_buffer, uint32_t args_offset))
    IL2CPP_REGISTER_METHODINFO(0x0473CFB0, ComputeShader_DispatchIndirect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0242ACC0, void, SetVector_Injected, (app::ComputeShader * this_ptr, int32_t name_i_d, app::Vector4* val))
} // namespace app::classes::UnityEngine::ComputeShader
