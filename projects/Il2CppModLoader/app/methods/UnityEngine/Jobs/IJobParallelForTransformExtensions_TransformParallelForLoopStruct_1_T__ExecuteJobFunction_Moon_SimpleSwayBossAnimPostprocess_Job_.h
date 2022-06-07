#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_T__ExecuteJobFunction_Moon_SimpleSwayBossAnimPostprocess_Job_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_T_ExecuteJobFunction_Moon_SimpleSwayBossAnimPostprocess_Job_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02264EB0, void, Invoke, (app::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_T_ExecuteJobFunction_Moon_SimpleSwayBossAnimPostprocess_Job_ * this_ptr, app::SimpleSwayBossAnimPostprocess_Job * job_data, void * additional_ptr, void * buffer_range_patch_data, app::JobRanges * ranges, int32_t job_index))
    IL2CPP_REGISTER_METHOD(0x02ACBF00, app::IAsyncResult *, BeginInvoke, (app::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_T_ExecuteJobFunction_Moon_SimpleSwayBossAnimPostprocess_Job_ * this_ptr, app::SimpleSwayBossAnimPostprocess_Job * job_data, void * additional_ptr, void * buffer_range_patch_data, app::JobRanges * ranges, int32_t job_index, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_T_ExecuteJobFunction_Moon_SimpleSwayBossAnimPostprocess_Job_ * this_ptr, app::SimpleSwayBossAnimPostprocess_Job * job_data, app::JobRanges * ranges, app::IAsyncResult * result))
}
