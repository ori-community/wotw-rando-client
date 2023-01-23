#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberPoolManager_ContinuousTimesliceJob.h>
#include <Modloader/app/structs/UberPoolManager.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSlicedJobPriority__Enum.h>
#include <Modloader/app/structs/Func_2_UberPoolManager_Boolean_.h>

namespace app::classes::UberPoolManager_ContinuousTimesliceJob {
    IL2CPP_REGISTER_METHOD(0x00FDF8A0, void, ctor, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr, app::UberPoolManager* manager, app::String* name, app::TimeSlicedJobPriority__Enum priority, app::Func_2_UberPoolManager_Boolean_* callback))
    IL2CPP_REGISTER_METHOD(0x00FDF8C0, void, OnUpdateBeat, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F980, void, OnJobFinished, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FDF960, bool, get_IsFinished, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_JobName, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FDF970, app::String*, get_TimesliceJobOwnerName, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_CustomTimeBudget, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_CustomTimeBudget, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00FDF9F0, app::String*, get_ContextualDebugData, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_EnqueuedTime, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_EnqueuedTime, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_AvailableBudget, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724030, void, set_AvailableBudget, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00FDFA70, void, EnqueueIfNecessary, (app::UberPoolManager_ContinuousTimesliceJob * this_ptr))
} // namespace app::classes::UberPoolManager_ContinuousTimesliceJob
