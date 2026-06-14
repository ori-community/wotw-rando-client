#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/JobsUtility_JobScheduleParameters__Boxed.h>
#include <Modloader/app/structs/ScheduleMode__Enum.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters {
    IL2CPP_REGISTER_METHOD(
        0x001EAF30,
        void,
        ctor,
        app::JobsUtility_JobScheduleParameters__Boxed* this_ptr,
        app::Void* i_job_data,
        void* i_reflection_data,
        app::JobHandle i_dependency,
        app::ScheduleMode__Enum i_schedule_mode
    )
}
