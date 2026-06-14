#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSliceSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSliceSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSliceSystem__Fields_DEFINED
struct Action_1_Moon_TimeSlicer_SliceExecutionStats_;
struct Action_1_Double_;
struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_;
struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob_;
struct String;
struct Stopwatch;
struct TimeSliceSystem__Fields {
    struct MonoBehaviour__Fields _;
    bool m_isFillingGaps;
    float TimeBudget;
    struct Action_1_Moon_TimeSlicer_SliceExecutionStats_* OnSliceExecuted;
    struct Action_1_Double_* OnReportOverheadPeak;
    struct Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_* OnBudgetExceeded;
    struct Queue_1_Moon_TimeSlicer_ITimeSlicedJob_* m_activeQueue;
    int32_t m_amountOfHighToMediumRate;
    int32_t m_amountOfHighJobsExecuted;
    struct String* m_lastJobName;
    double m_lastJobDuration;
    bool m_profileMarkerActive;
    struct Stopwatch* m_stopwatch;
    int32_t NoSlicesProcessed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSliceSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeSliceSystem__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Double_.h>
#include <Modloader/app/structs/Action_1_Moon_TimeSlicer_SliceExecutionStats_.h>
#include <Modloader/app/structs/Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_.h>
#include <Modloader/app/structs/Queue_1_Moon_TimeSlicer_ITimeSlicedJob_.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimeSliceSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSliceSystem__Fields_FWDDECL)
#include <Modloader/app/structs/TimeSliceSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSliceSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
