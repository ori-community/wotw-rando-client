#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyPerformanceTester_Old__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyPerformanceTester_Old__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyPerformanceTester_Old__Fields_DEFINED)
#include <Modloader/app/structs/State__Enum.h>
#if defined(IL2CPP_STRUCT_State__Enum_DEFINED)
#define IL2CPP_STRUCT_HierarchyPerformanceTester_Old__Fields_DEFINED
struct Action;
struct Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_;
struct List_1_HierarchyDebugMenu_GameObjectItem_;
struct HierarchyDebugMenu_GameObjectItem;
struct HPerfTestResult;
struct HierarchyPerformanceTester_Old_HPerfTestResultComparer;
struct __declspec(align(8)) HierarchyPerformanceTester_Old__Fields {
    struct Action* OnTestComplete;
    State__Enum CurrentState;

    struct Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_* Results;
    float ProcessTime;
    float m_stateCurrentTime;
    struct List_1_HierarchyDebugMenu_GameObjectItem_* m_objectsToScan;
    struct HierarchyDebugMenu_GameObjectItem* m_scanRoot;
    struct HierarchyDebugMenu_GameObjectItem* m_currentItem;
    int32_t m_microProfilerStartFrameIndex;
    int32_t m_microProfilerEndFrameIndex;
    struct HPerfTestResult* m_baselinePerf;
    bool m_debugMode;
    bool m_running;
    struct HierarchyPerformanceTester_Old_HPerfTestResultComparer* m_comparer;
    int32_t m_originalVSyncValue;
    float m_originalDynamicResScalingValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyPerformanceTester_Old__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyPerformanceTester_Old__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/HPerfTestResult.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/HierarchyPerformanceTester_Old_HPerfTestResultComparer.h>
#include <Modloader/app/structs/List_1_HierarchyDebugMenu_GameObjectItem_.h>
#endif
#undef IL2CPP_STRUCT_HierarchyPerformanceTester_Old__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyPerformanceTester_Old__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyPerformanceTester_Old__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyPerformanceTester_Old__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyPerformanceTester_Old__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
