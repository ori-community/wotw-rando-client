#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XboxControllerManager_VibrationJob.h>
#include <Modloader/app/structs/JobRanges.h>

namespace app::classes::Unity::Jobs::IJobExtensions_JobStruct_1_Core_Devices_XboxControllerManager_VibrationJob_ {
    IL2CPP_REGISTER_METHOD(0x022655A0, void*, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x02265960, void, Execute, (app::XboxControllerManager_VibrationJob * data, void* additional_ptr, void* buffer_range_patch_data, app::JobRanges* ranges, int32_t job_index))
} // namespace app::classes::Unity::Jobs::IJobExtensions_JobStruct_1_Core_Devices_XboxControllerManager_VibrationJob_
