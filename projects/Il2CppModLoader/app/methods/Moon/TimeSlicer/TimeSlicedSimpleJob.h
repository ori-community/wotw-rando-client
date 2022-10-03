#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TimeSlicer::TimeSlicedSimpleJob {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_EnqueuedTime, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_EnqueuedTime, (app::TimeSlicedSimpleJob * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x010C47E0, void, ctor, (app::TimeSlicedSimpleJob * this_ptr, app::TimeSlicedSimpleJob_TimeSlicedJobDelegate* job, app::GameObject* owner, app::Func_1_String_* contextual_data))
    IL2CPP_REGISTER_METHOD(0x010C4820, void, OnUpdateBeat, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnJobFinished, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsFinished, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C4860, app::String*, get_JobName, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_TimesliceJobOwnerName, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_CustomTimeBudget, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_CustomTimeBudget, (app::TimeSlicedSimpleJob * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x010C48E0, app::String*, get_ContextualDebugData, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_AvailableBudget, (app::TimeSlicedSimpleJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724030, void, set_AvailableBudget, (app::TimeSlicedSimpleJob * this_ptr, float value))
} // namespace app::classes::Moon::TimeSlicer::TimeSlicedSimpleJob
