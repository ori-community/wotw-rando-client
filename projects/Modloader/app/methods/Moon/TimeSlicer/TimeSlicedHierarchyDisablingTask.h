#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSlicedHierarchyDisablingTask.h>

namespace app::classes::Moon::TimeSlicer::TimeSlicedHierarchyDisablingTask {
    IL2CPP_REGISTER_METHOD(
        0x010C4020,
        void,
        ctor,
        app::TimeSlicedHierarchyDisablingTask* this_ptr,
        app::List_1_UnityEngine_GameObject_* objects_to_time_slice_disable,
        app::GameObject* owner,
        app::Action_1_Boolean_* on_job_completed,
        app::String* scene_name
    )
    IL2CPP_REGISTER_METHOD(0x010C40A0, app::IEnumerator*, TimeSlicedDisable, app::TimeSlicedHierarchyDisablingTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C41F0, void, Reset, app::TimeSlicedHierarchyDisablingTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C4220, app::String*, get_JobName, app::TimeSlicedHierarchyDisablingTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_TimesliceJobOwnerName, app::TimeSlicedHierarchyDisablingTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_ContextualDebugData, app::TimeSlicedHierarchyDisablingTask* this_ptr)
} // namespace app::classes::Moon::TimeSlicer::TimeSlicedHierarchyDisablingTask
