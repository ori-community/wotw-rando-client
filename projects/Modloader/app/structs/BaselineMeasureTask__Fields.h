#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaselineMeasureTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaselineMeasureTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselineMeasureTask__Fields_DEFINED)
#include <Modloader/app/structs/BaselineMeasureTask_BaselineMeasureState__Enum.h>
#include <Modloader/app/structs/SimpleTask__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_DEFINED)
#define IL2CPP_STRUCT_BaselineMeasureTask__Fields_DEFINED
struct Action_1_String_;
struct SceneSample;
struct BaselinePerfAnalyzer;
struct List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_;
struct BaselineMeasureTask__Fields {
    struct SimpleTask__Fields _;
    struct Action_1_String_* OnFailed;
    struct SceneSample* m_model;
    struct BaselinePerfAnalyzer* m_resultsAnalyzer;
    BaselineMeasureTask_BaselineMeasureState__Enum m_currentState;

    struct List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_* m_results;
    int32_t m_tryCounter;
    int32_t m_microProfilerStartFrameIndex;
    int32_t m_microProfilerEndFrameIndex;
    float m_measureTime;
    float m_delayTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaselineMeasureTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaselineMeasureTask__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/BaselinePerfAnalyzer.h>
#include <Modloader/app/structs/List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/SceneSample.h>
#endif
#undef IL2CPP_STRUCT_BaselineMeasureTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselineMeasureTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaselineMeasureTask__Fields_FWDDECL)
#include <Modloader/app/structs/BaselineMeasureTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaselineMeasureTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
