#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_.h>
#include <Modloader/app/structs/ITimeSlicedJob.h>
#include <Modloader/app/structs/Queue_1_Moon_TimeSlicer_ITimeSlicedJob_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSliceSystem.h>
#include <Modloader/app/structs/TimeSlicedJobPriority__Enum.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::Moon::TimeSlicer::TimeSliceSystem {
    IL2CPP_REGISTER_METHOD(0x010BCA70, bool, get_DebuggingBudgetExceeded, )
    IL2CPP_REGISTER_METHOD(0x010BCB40, bool, get_TimeslicedEnabled, )
    IL2CPP_REGISTER_METHOD(0x010BCB60, app::Queue_1_Moon_TimeSlicer_ITimeSlicedJob_*, get_LowPriorityQueue, )
    IL2CPP_REGISTER_METHOD(0x010BCC00, app::Queue_1_Moon_TimeSlicer_ITimeSlicedJob_*, get_MediumPriorityQueue, )
    IL2CPP_REGISTER_METHOD(0x010BCCA0, app::Queue_1_Moon_TimeSlicer_ITimeSlicedJob_*, get_HighPriorityQueue, )
    IL2CPP_REGISTER_METHOD(0x010BCD40, app::Queue_1_Moon_TimeSlicer_ITimeSlicedJob_*, get_MandatoryPriorityQueue, )
    IL2CPP_REGISTER_METHOD(0x010BCDE0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x010BCF60, double, get_LastFrameElapsedMilliseconds, )
    IL2CPP_REGISTER_METHOD(0x010BD0C0, double, get_ElaspedMiliseconds, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_LastJobName, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BD110, double, get_LastJobDuration, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BD120, int32_t, get_AmountOfJobsQueued, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BD320, void, Awake, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BD580, void, OnDestroy, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BD720, void, EndOfFrameUpdate, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BD7E0, void, LateUpdate, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BD8A0, void, UpdateJobs, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BDD20, void, EnqueueTimeSlicedJob_1, app::ITimeSlicedJob* job, app::TimeSlicedJobPriority__Enum priority)
    IL2CPP_REGISTER_METHOD(0x010BDFB0, void, ExecuteJobOnSingleFrame, app::ITimeSlicedJob* job)
    IL2CPP_REGISTER_METHOD(
        0x010BE230,
        void,
        EnqueueTimeSlicedJob_2,
        app::ITimeSlicedJob* job,
        app::TimeSlicedJobPriority__Enum priority,
        float custom_time_budget
    )
    IL2CPP_REGISTER_METHOD(
        0x010BE310,
        void,
        EnqueueTimeSlicedJob_3,
        app::ITimeSlicedJob* job,
        app::Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_* dynamic_priority
    )
    IL2CPP_REGISTER_METHOD(
        0x010BE490,
        void,
        EnqueueTimeSlicedJob_4,
        app::ITimeSlicedJob* job,
        app::Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_* dynamic_priority,
        float custom_time_budget
    )
    IL2CPP_REGISTER_METHOD(0x010BE6C0, void, FinishJobImmediately, app::ITimeSlicedJob* job)
    IL2CPP_REGISTER_METHOD(
        0x010BE760,
        app::Queue_1_Moon_TimeSlicer_ITimeSlicedJob_*,
        GetJobQueueDebug,
        app::TimeSliceSystem* this_ptr,
        app::TimeSlicedJobPriority__Enum priority
    )
    IL2CPP_REGISTER_METHOD(0x010BE8D0, app::Queue_1_Moon_TimeSlicer_ITimeSlicedJob_*, GetJobQueue, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BEBF0, void, ProcessJobs, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x010BF7A0,
        bool,
        _removeJobFromQueue,
        app::TimeSliceSystem* this_ptr,
        app::Queue_1_Moon_TimeSlicer_ITimeSlicedJob_* queue,
        app::ITimeSlicedJob* job
    )
    IL2CPP_REGISTER_METHOD(0x010BF890, void, FinishJob, app::TimeSliceSystem* this_ptr, app::ITimeSlicedJob* job)
    IL2CPP_REGISTER_METHOD(0x010BFAF0, void, OnJobCancelled, app::TimeSliceSystem* this_ptr, app::ITimeSlicedJob* job)
    IL2CPP_REGISTER_METHOD(0x010BFC20, bool, ShouldExecuteAMediumJob, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BFC40, void, ctor, app::TimeSliceSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BFDA0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x015515F0, void, UpdateCustomBudgetForJobsOfType_1, float new_budget)
    IL2CPP_REGISTER_METHOD(
        0x015512E0,
        void,
        ExecuteAllJobsOfTypeOnSingleFrame,
        app::Queue_1_Moon_TimeSlicer_ITimeSlicedJob_* queue,
        app::Type__Array* exclusions
    )
    IL2CPP_REGISTER_METHOD(0x015514C0, void, FinishAllJobsOfTypeImmediately_1, app::Type__Array* exclusions)
    IL2CPP_REGISTER_METHOD(0x015514C0, void, FinishAllJobsOfTypeImmediately_2, app::Type__Array* exclusions)
    IL2CPP_REGISTER_METHOD(0x015515F0, void, UpdateCustomBudgetForJobsOfType_2, float new_budget)
    IL2CPP_REGISTER_METHOD(0x015514C0, void, FinishAllJobsOfTypeImmediately_3, app::Type__Array* exclusions)
    IL2CPP_REGISTER_METHOD(0x015514C0, void, FinishAllJobsOfTypeImmediately_4, app::Type__Array* exclusions)
    IL2CPP_REGISTER_METHOD(0x015514C0, void, FinishAllJobsOfTypeImmediately_5, app::Type__Array* exclusions)
} // namespace app::classes::Moon::TimeSlicer::TimeSliceSystem
