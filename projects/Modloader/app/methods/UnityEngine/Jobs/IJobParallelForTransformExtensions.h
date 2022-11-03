#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Jobs::IJobParallelForTransformExtensions {
    IL2CPP_REGISTER_METHOD(0x02FF7760, app::JobHandle, Schedule_1, (app::SimpleSwayBossAnimPostprocess_Job job_data, app::TransformAccessArray transforms, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHODINFO(0x04728D68, IJobParallelForTransformExtensions_Schedule__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7670, app::JobHandle, Schedule_2, (app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour job_data, app::TransformAccessArray transforms, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHODINFO(0x0474D300, IJobParallelForTransformExtensions_Schedule_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF7760, app::JobHandle, Schedule_3, (app::VerletStructure_JobWithMonoBehaviour job_data, app::TransformAccessArray transforms, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHODINFO(0x0474D270, IJobParallelForTransformExtensions_Schedule_2__MethodInfo)
} // namespace app::classes::UnityEngine::Jobs::IJobParallelForTransformExtensions
