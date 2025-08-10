#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IJobExtensions_JobStruc_1_T_ExecuteJobFunctio_Cor_Device_XboxControllerManage_VibrationJo_.h>
#include <Modloader/app/structs/JobRanges.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XboxControllerManager_VibrationJob.h>

namespace app::classes::Unity::Jobs::IJobExtensions_JobStruct_1_T__ExecuteJobFunction_Core_Devices_XboxControllerManager_VibrationJob_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::IJobExtensions_JobStruct_1_T_ExecuteJobFunction_Core_Devices_XboxControllerManager_VibrationJob_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02264EB0,
        void,
        Invoke,
        app::IJobExtensions_JobStruct_1_T_ExecuteJobFunction_Core_Devices_XboxControllerManager_VibrationJob_* this_ptr,
        app::XboxControllerManager_VibrationJob* data,
        void* additional_ptr,
        void* buffer_range_patch_data,
        app::JobRanges* ranges,
        int32_t job_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02265340,
        app::IAsyncResult*,
        BeginInvoke,
        app::IJobExtensions_JobStruct_1_T_ExecuteJobFunction_Core_Devices_XboxControllerManager_VibrationJob_* this_ptr,
        app::XboxControllerManager_VibrationJob* data,
        void* additional_ptr,
        void* buffer_range_patch_data,
        app::JobRanges* ranges,
        int32_t job_index,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x012E78E0,
        void,
        EndInvoke,
        app::IJobExtensions_JobStruct_1_T_ExecuteJobFunction_Core_Devices_XboxControllerManager_VibrationJob_* this_ptr,
        app::XboxControllerManager_VibrationJob* data,
        app::JobRanges* ranges,
        app::IAsyncResult* result
    )
} // namespace app::classes::Unity::Jobs::IJobExtensions_JobStruct_1_T__ExecuteJobFunction_Core_Devices_XboxControllerManager_VibrationJob_
