#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Job.h>
#include <Modloader/app/structs/XboxControllerManager_VibrationJob.h>

namespace app::classes::Unity::Jobs::IJobExtensions {
    IL2CPP_REGISTER_METHOD(0x02FF7290, app::JobHandle, Schedule_1, app::SimpleSwayAnimPostprocess_Job job_data, app::JobHandle depends_on)
    IL2CPP_REGISTER_METHOD(0x02FF71B0, app::JobHandle, Schedule_2, app::XboxControllerManager_VibrationJob job_data, app::JobHandle depends_on)
} // namespace app::classes::Unity::Jobs::IJobExtensions
