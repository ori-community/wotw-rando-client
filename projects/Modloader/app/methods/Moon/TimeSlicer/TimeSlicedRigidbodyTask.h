#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimeSlicedRigidbodyTask.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::TimeSlicer::TimeSlicedRigidbodyTask {
    IL2CPP_REGISTER_METHOD(0x010C4560, void, ctor, (app::TimeSlicedRigidbodyTask * this_ptr, app::PhysicalSystemManager* manager, app::IEnumerator* routine, bool activate, app::GameObject* owner, app::Action_1_Boolean_* on_job_completed, app::String* scene_name))
    IL2CPP_REGISTER_METHOD(0x010C45E0, void, Config, (app::TimeSlicedRigidbodyTask * this_ptr, app::PhysicalSystemManager* manager, app::IEnumerator* routine, bool activate))
    IL2CPP_REGISTER_METHOD(0x010C45F0, void, ProcessAllObjects, (app::TimeSlicedRigidbodyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C46F0, app::String*, get_JobName, (app::TimeSlicedRigidbodyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_TimesliceJobOwnerName, (app::TimeSlicedRigidbodyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_ContextualDebugData, (app::TimeSlicedRigidbodyTask * this_ptr))
} // namespace app::classes::Moon::TimeSlicer::TimeSlicedRigidbodyTask
