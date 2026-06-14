#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSliceSystem__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSliceSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystem__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TimeSliceSystem__StaticFields_DEFINED
struct TimeSliceSystem;
struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob_;
struct Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_;
struct TimeSliceSystem__StaticFields {
    struct TimeSliceSystem* Instance;
    bool NotifySliceExecution;
    bool NotifyBudgetExceeded;
    float MaxLifetimeAsLowPriority;
    bool EnableDebugNames;
    bool ShareTimesliceWithIntegration;
    double TimeBudgetPerFrame;
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob_* m_lowPriorityQueue;
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob_* m_mediumPriorityQueue;
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob_* m_highPriorityQueue;
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob_* m_mandatorySlices;
    struct Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_* m_jobDynamicPriority;
    bool UseEOFUpdate;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSliceSystem__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TimeSliceSystem__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_.h>
#include <Modloader/app/structs/Queue_1_Moon_TimeSlicer_ITimeSlicedJob_.h>
#include <Modloader/app/structs/TimeSliceSystem.h>
#endif
#undef IL2CPP_STRUCT_TimeSliceSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystem__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSliceSystem__StaticFields_FWDDECL)
#include <Modloader/app/structs/TimeSliceSystem__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSliceSystem__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
