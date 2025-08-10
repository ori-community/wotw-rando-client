#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlendGradientColorsJob.h>
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/MoonTrailSystem_SimulateJob.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_Job.h>

namespace app::classes::Unity::Jobs::IJobParallelForExtensions {
    IL2CPP_REGISTER_METHOD(
        0x02FF7470,
        app::JobHandle,
        Schedule_1,
        app::MoonTrailSystem_SimulateJob job_data,
        int32_t array_length,
        int32_t innerloop_batch_count,
        app::JobHandle depends_on
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF7470,
        app::JobHandle,
        Schedule_2,
        app::VerletPhysicsAnimationPostprocess_Job job_data,
        int32_t array_length,
        int32_t innerloop_batch_count,
        app::JobHandle depends_on
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF7570,
        app::JobHandle,
        Schedule_3,
        app::SoundZoneProcessor_Job job_data,
        int32_t array_length,
        int32_t innerloop_batch_count,
        app::JobHandle depends_on
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF7370,
        app::JobHandle,
        Schedule_4,
        app::BlendGradientColorsJob job_data,
        int32_t array_length,
        int32_t innerloop_batch_count,
        app::JobHandle depends_on
    )
} // namespace app::classes::Unity::Jobs::IJobParallelForExtensions
