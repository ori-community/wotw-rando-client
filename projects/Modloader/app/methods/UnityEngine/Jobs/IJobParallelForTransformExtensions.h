#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_JobWithMonoBehaviour.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Job.h>
#include <Modloader/app/structs/TransformAccessArray.h>
#include <Modloader/app/structs/VerletStructure_JobWithMonoBehaviour.h>

namespace app::classes::UnityEngine::Jobs::IJobParallelForTransformExtensions {
    IL2CPP_REGISTER_METHOD(0x02FF7760, app::JobHandle, Schedule_1, (app::SimpleSwayBossAnimPostprocess_Job job_data, app::TransformAccessArray transforms, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x02FF7670, app::JobHandle, Schedule_2, (app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour job_data, app::TransformAccessArray transforms, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x02FF7760, app::JobHandle, Schedule_3, (app::VerletStructure_JobWithMonoBehaviour job_data, app::TransformAccessArray transforms, app::JobHandle depends_on))
} // namespace app::classes::UnityEngine::Jobs::IJobParallelForTransformExtensions
