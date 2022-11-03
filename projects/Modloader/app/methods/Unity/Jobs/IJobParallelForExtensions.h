#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Unity::Jobs::IJobParallelForExtensions {
    IL2CPP_REGISTER_METHOD(0x02FF7470, app::JobHandle, Schedule_1, (app::MoonTrailSystem_SimulateJob job_data, int32_t array_length, int32_t innerloop_batch_count, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHODINFO(0x0476FAC0, IJobParallelForExtensions_Schedule__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7470, app::JobHandle, Schedule_2, (app::VerletPhysicsAnimationPostprocess_Job job_data, int32_t array_length, int32_t innerloop_batch_count, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHODINFO(0x04751728, IJobParallelForExtensions_Schedule_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7570, app::JobHandle, Schedule_3, (app::SoundZoneProcessor_Job job_data, int32_t array_length, int32_t innerloop_batch_count, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHODINFO(0x0476BD30, IJobParallelForExtensions_Schedule_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7370, app::JobHandle, Schedule_4, (app::BlendGradientColorsJob job_data, int32_t array_length, int32_t innerloop_batch_count, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHODINFO(0x047362B0, IJobParallelForExtensions_Schedule_3__MethodInfo)
} // namespace app::classes::Unity::Jobs::IJobParallelForExtensions
