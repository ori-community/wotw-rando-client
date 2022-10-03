#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::ComputeBuffer {
    IL2CPP_REGISTER_METHOD(0x024296E0, void, ctor_1, (app::ComputeBuffer * this_ptr, int32_t count, int32_t stride))
    IL2CPP_REGISTER_METHOD(0x02429710, void, ctor_2, (app::ComputeBuffer * this_ptr, int32_t count, int32_t stride, app::ComputeBufferType__Enum type))
    IL2CPP_REGISTER_METHOD(0x02429730, void, ctor_3, (app::ComputeBuffer * this_ptr, int32_t count, int32_t stride, app::ComputeBufferType__Enum type, int32_t stack_depth))
    IL2CPP_REGISTER_METHODINFO(0x0474EEF0, ComputeBuffer__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02429890, void, Finalize, (app::ComputeBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02429920, void, Dispose_1, (app::ComputeBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024299D0, void, Dispose_2, (app::ComputeBuffer * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02429AE0, void*, InitBuffer, (int32_t count, int32_t stride, app::ComputeBufferType__Enum type))
    IL2CPP_REGISTER_METHOD(0x02429B50, void, DestroyBuffer, (app::ComputeBuffer * buf))
    IL2CPP_REGISTER_METHOD(0x02429BA0, void, Release, (app::ComputeBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02429BB0, bool, IsValid, (app::ComputeBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02429C30, void, SetData_1, (app::ComputeBuffer * this_ptr, app::Array* data))
    IL2CPP_REGISTER_METHODINFO(0x0478ABB8, ComputeBuffer_SetData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02429E30, void, SetData_2, (app::ComputeBuffer * this_ptr, app::Array* data, int32_t managed_buffer_start_index, int32_t compute_buffer_start_index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04775048, ComputeBuffer_SetData_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0242A1C0, void, InternalSetData, (app::ComputeBuffer * this_ptr, app::Array* data, int32_t managed_buffer_start_index, int32_t compute_buffer_start_index, int32_t count, int32_t elem_size))
    IL2CPP_REGISTER_METHOD(0x0242A250, void, GetData, (app::ComputeBuffer * this_ptr, app::Array* data))
    IL2CPP_REGISTER_METHODINFO(0x0472CA00, ComputeBuffer_GetData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0242A550, void, InternalGetData, (app::ComputeBuffer * this_ptr, app::Array* data, int32_t managed_buffer_start_index, int32_t compute_buffer_start_index, int32_t count, int32_t elem_size))
    IL2CPP_REGISTER_METHOD(0x0242A5E0, void, SetCounterValue, (app::ComputeBuffer * this_ptr, uint32_t counter_value))
    IL2CPP_REGISTER_METHOD(0x0242A640, void, CopyCount, (app::ComputeBuffer * src, app::ComputeBuffer* dst, int32_t dst_offset_bytes))
    IL2CPP_REGISTER_METHOD(0x015E4290, void, SetData_3, (app::ComputeBuffer * this_ptr, app::List_1_MeshTrail_MeshTrailEmitter_* data))
    IL2CPP_REGISTER_METHODINFO(0x04755FA0, ComputeBuffer_SetData_2__MethodInfo)
} // namespace app::classes::UnityEngine::ComputeBuffer
