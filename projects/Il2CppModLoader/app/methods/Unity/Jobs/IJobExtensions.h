#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Unity::Jobs::IJobExtensions {
    IL2CPP_REGISTER_METHOD(0x02FF7290, app::JobHandle, Schedule_1, (app::SimpleSwayAnimPostprocess_Job job_data, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHODINFO(0x04736850, IJobExtensions_Schedule__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF71B0, app::JobHandle, Schedule_2, (app::XboxControllerManager_VibrationJob job_data, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHODINFO(0x0472B718, IJobExtensions_Schedule_1__MethodInfo)
} // namespace app::classes::Unity::Jobs::IJobExtensions
