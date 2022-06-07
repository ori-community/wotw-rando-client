#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::TimeSlicer::TimeSlicedActivationTask {
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_Activate, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, get_NumExpensiveActivations, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String *, get_SceneName, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_SceneName, (app::TimeSlicedActivationTask * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x010C0350, void, ctor_1, (app::TimeSlicedActivationTask * this_ptr, app::List_1_UnityEngine_GameObject_ * target_objects, app::List_1_UnityEngine_Component_ * pre_enable_observers, app::List_1_UnityEngine_Component_ * post_enable_observers, bool activate, bool reversed_order, app::GameObject * owner, app::Action_1_Boolean_ * on_job_completed, app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x010C0680, void, ctor_2, (app::TimeSlicedActivationTask * this_ptr, app::List_1_UnityEngine_GameObject_ * target_objects, app::List_1_UnityEngine_Component_ * pre_enable_observers, app::List_1_UnityEngine_Component_ * post_enable_observers, bool activate, bool reversed_order, app::Action_1_Boolean_ * on_job_completed))
    IL2CPP_REGISTER_METHOD(0x010C0980, void, CreateTimeSlicedActivationTask, (app::TimeSlicedActivationTask * this_ptr, app::List_1_UnityEngine_GameObject_ * target_objects, app::List_1_UnityEngine_Component_ * pre_enable_observers, app::List_1_UnityEngine_Component_ * post_enable_observers, bool activate, bool reversed_order, app::Action_1_Boolean_ * on_job_completed))
    IL2CPP_REGISTER_METHOD(0x010C0AB0, void, GetActiveObjects, (app::Transform * trans, app::List_1_UnityEngine_GameObject_ * objects))
    IL2CPP_REGISTER_METHOD(0x010C0D30, void, Config, (app::TimeSlicedActivationTask * this_ptr, app::List_1_UnityEngine_GameObject_ * target_objects, app::List_1_UnityEngine_Component_ * pre_enable_observers, app::List_1_UnityEngine_Component_ * post_enable_observers, bool activate, bool reversed_order, app::Action_1_Boolean_ * on_job_completed))
    IL2CPP_REGISTER_METHOD(0x00777A20, void, Resume, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C0E50, void, ProcessAllObjects, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C0F70, app::IEnumerator *, TimeSlicedActivation, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C10C0, void, PostEnableObjects, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C13E0, void, PreDisableObjects, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C1680, void, ProcessObject, (app::TimeSlicedActivationTask * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x010C19F0, void, Reset, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C1A20, app::String *, get_JobName, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String *, get_TimesliceJobOwnerName, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String *, get_ContextualDebugData, (app::TimeSlicedActivationTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C1B10, void, cctor, ())
}
