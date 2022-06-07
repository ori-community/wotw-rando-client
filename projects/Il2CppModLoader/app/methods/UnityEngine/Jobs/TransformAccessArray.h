#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Jobs::TransformAccessArray {
    IL2CPP_REGISTER_METHOD(0x001F2790, void, ctor, (app::TransformAccessArray__Boxed * this_ptr, app::Transform__Array * transforms, int32_t desired_job_count))
    IL2CPP_REGISTER_METHOD(0x0252E130, void, Allocate, (int32_t capacity, int32_t desired_job_count, app::TransformAccessArray * array))
    IL2CPP_REGISTER_METHOD(0x001F27A0, bool, get_isCreated, (app::TransformAccessArray__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F27B0, void, Dispose, (app::TransformAccessArray__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9820, void *, GetTransformAccessArrayForSchedule, (app::TransformAccessArray__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F27C0, app::Transform *, get_Item, (app::TransformAccessArray__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0252E350, void *, Create, (int32_t capacity, int32_t desired_job_count))
    IL2CPP_REGISTER_METHOD(0x0252E3B0, void, DestroyTransformAccessArray, (void * transform_array))
    IL2CPP_REGISTER_METHOD(0x0252E400, void, SetTransforms, (void * transform_array_int_ptr, app::Transform__Array * transforms))
    IL2CPP_REGISTER_METHOD(0x0252E460, void *, GetSortedTransformAccess, (void * transform_array_int_ptr))
    IL2CPP_REGISTER_METHOD(0x0252E4B0, void *, GetSortedToUserIndex, (void * transform_array_int_ptr))
    IL2CPP_REGISTER_METHOD(0x0252E500, app::Transform *, GetTransform, (void * transform_array_int_ptr, int32_t index))
}
