#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ScenesManagerPrediction_UpdateExtrapolatedPositionTask.h>
#include <Modloader/app/structs/TimeSlicedJobPriority__Enum.h>

namespace app::classes::Moon::TimeSlicer::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ {
    IL2CPP_REGISTER_METHOD(0x02AF3CC0, void, ctor, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x04729568, AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AF3D30, bool, get_IsFinished, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047927C8, AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask__get_IsFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AF3DC0, void, SetTask, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr, app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask task))
    IL2CPP_REGISTER_METHODINFO(0x04705798, AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask__SetTask__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AF3E00, bool, Enqueue, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr, app::TimeSlicedJobPriority__Enum priority))
    IL2CPP_REGISTER_METHODINFO(0x04708898, AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AF3CE0, void, OnUpdateBeat, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Pause, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF3D00, void, OnJobFinished, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_JobName, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_TimesliceJobOwnerName, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_CustomTimeBudget, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_CustomTimeBudget, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02AF3D40, app::String*, get_ContextualDebugData, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC510, float, get_EnqueuedTime, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83350, void, set_EnqueuedTime, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_AvailableBudget, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_AvailableBudget, (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ * this_ptr, float value))
} // namespace app::classes::Moon::TimeSlicer::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_
