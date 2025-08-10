#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TestTagHelper_TestTypeTag__Enum.h>
#include <Modloader/app/structs/TimeSlicedCoroutineJob.h>

namespace app::classes::Moon::TimeSlicer::TimeSlicedCoroutineJob {
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_EnqueuedTime, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_EnqueuedTime, app::TimeSlicedCoroutineJob* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x010C1F80, void, ctor_1, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x010C2030,
        void,
        ctor_2,
        app::TimeSlicedCoroutineJob* this_ptr,
        app::IEnumerator* routine,
        app::GameObject* owner,
        app::Action_1_Boolean_* on_job_completed,
        app::String* job_name,
        app::Func_1_String_* contextual_debug_data,
        app::String* scene_name
    )
    IL2CPP_REGISTER_METHOD(
        0x010C2140,
        void,
        ctor_3,
        app::TimeSlicedCoroutineJob* this_ptr,
        app::IEnumerator* routine,
        app::GameObject* owner,
        app::Action_1_Boolean_* on_job_completed,
        app::Func_1_String_* custom_job_name,
        app::Func_1_String_* contextual_debug_data,
        app::String* scene_name
    )
    IL2CPP_REGISTER_METHOD(
        0x010C2250,
        void,
        ctor_4,
        app::TimeSlicedCoroutineJob* this_ptr,
        app::IEnumerator* routine,
        app::String* owner,
        app::Action_1_Boolean_* on_job_completed,
        app::String* job_name,
        app::Func_1_String_* contextual_debug_data,
        app::String* scene_name
    )
    IL2CPP_REGISTER_METHOD(
        0x010C2330,
        void,
        ctor_5,
        app::TimeSlicedCoroutineJob* this_ptr,
        app::IEnumerator* routine,
        app::String* owner,
        app::Action_1_Boolean_* on_job_completed,
        app::Func_1_String_* custom_job_name,
        app::Func_1_String_* contextual_debug_data,
        app::String* scene_name
    )
    IL2CPP_REGISTER_METHOD(
        0x010C2420,
        void,
        ctor_6,
        app::TimeSlicedCoroutineJob* this_ptr,
        app::IEnumerator* routine,
        app::String* owner,
        app::Func_1_String_* custom_job_name,
        app::Func_1_String_* contextual_debug_data,
        app::String* scene_name
    )
    IL2CPP_REGISTER_METHOD(
        0x010C2520,
        void,
        ctor_7,
        app::TimeSlicedCoroutineJob* this_ptr,
        app::IEnumerator* routine,
        app::GameObject* owner,
        app::Func_1_String_* custom_job_name,
        app::Func_1_String_* contextual_debug_data,
        app::String* scene_name
    )
    IL2CPP_REGISTER_METHOD(
        0x010C2630,
        void,
        Init,
        app::TimeSlicedCoroutineJob* this_ptr,
        app::IEnumerator* routine,
        app::String* owner_name,
        app::Action_1_Boolean_* on_job_completed,
        app::String* job_name,
        app::Func_1_String_* custom_job_name,
        app::Func_1_String_* contextual_debug_data,
        app::String* scene_name
    )
    IL2CPP_REGISTER_METHOD(0x010C2680, void, BuildSceneNameData, app::TimeSlicedCoroutineJob* this_ptr, app::String* scene_name)
    IL2CPP_REGISTER_METHOD(0x010C2740, void, OnUpdateBeat, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C27E0, void, OnJobFinished, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C2880, void, CancelJob, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C2A50, void, Reset, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C2A60, bool, get_IsFinished, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C2A90, bool, get_IsRunning, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C2AB0, app::String*, get_JobName, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        SetDebugData,
        app::TimeSlicedCoroutineJob* this_ptr,
        app::String* job_name,
        app::String* contextual_data,
        app::TestTagHelper_TestTypeTag__Enum tag
    )
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_TimesliceJobOwnerName, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008663D0, float, get_CustomTimeBudget, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008663E0, void, set_CustomTimeBudget, app::TimeSlicedCoroutineJob* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x010C2B40, app::String*, get_ContextualDebugData, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35F30, float, get_AvailableBudget, app::TimeSlicedCoroutineJob* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A183E0, void, set_AvailableBudget, app::TimeSlicedCoroutineJob* this_ptr, float value)
} // namespace app::classes::Moon::TimeSlicer::TimeSlicedCoroutineJob
