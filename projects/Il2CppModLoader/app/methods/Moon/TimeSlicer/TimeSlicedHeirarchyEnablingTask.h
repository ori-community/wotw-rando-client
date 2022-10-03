#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TimeSlicer::TimeSlicedHeirarchyEnablingTask {
    IL2CPP_REGISTER_METHOD(0x010C2BF0, void, ctor, (app::TimeSlicedHeirarchyEnablingTask * this_ptr, app::Transform* root, app::GameObject* owner, bool reenable_root, app::Action_1_Boolean_* on_job_completed, app::String* scene_name))
    IL2CPP_REGISTER_METHOD(0x010C2F00, app::IEnumerator*, TimeSlicedEnable, (app::TimeSlicedHeirarchyEnablingTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C3050, void, DisableTimeSlicedObjects, (app::TimeSlicedHeirarchyEnablingTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C31B0, void, StoreActiveObjects, (app::TimeSlicedHeirarchyEnablingTask * this_ptr, app::Transform* trans))
    IL2CPP_REGISTER_METHOD(0x010C34A0, void, PostEnableHeirarchy, (app::TimeSlicedHeirarchyEnablingTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C3590, void, Reset, (app::TimeSlicedHeirarchyEnablingTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C3660, app::String*, get_JobName, (app::TimeSlicedHeirarchyEnablingTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_TimesliceJobOwnerName, (app::TimeSlicedHeirarchyEnablingTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_ContextualDebugData, (app::TimeSlicedHeirarchyEnablingTask * this_ptr))
} // namespace app::classes::Moon::TimeSlicer::TimeSlicedHeirarchyEnablingTask
