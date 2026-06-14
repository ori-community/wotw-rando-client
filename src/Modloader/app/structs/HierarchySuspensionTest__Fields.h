#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchySuspensionTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchySuspensionTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchySuspensionTest__Fields_DEFINED)
#include <Modloader/app/structs/HierarchySuspensionTest_State__Enum.h>
#if defined(IL2CPP_STRUCT_HierarchySuspensionTest_State__Enum_DEFINED)
#define IL2CPP_STRUCT_HierarchySuspensionTest__Fields_DEFINED
struct Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_;
struct List_1_HierarchyDebugMenu_GameObjectItem_;
struct HierarchyDebugMenu_GameObjectItem;
struct HierarchySuspensionTest_PerfTestResult;
struct __declspec(align(8)) HierarchySuspensionTest__Fields {
    HierarchySuspensionTest_State__Enum CurrentState;

    struct Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_* Results;
    float m_stateCurrentTime;
    struct List_1_HierarchyDebugMenu_GameObjectItem_* m_objectsToScan;
    struct HierarchyDebugMenu_GameObjectItem* m_scanRoot;
    struct HierarchyDebugMenu_GameObjectItem* m_currentItem;
    int32_t m_microProfilerStartFrameIndex;
    int32_t m_microProfilerEndFrameIndex;
    struct HierarchySuspensionTest_PerfTestResult* m_baselinePerf;
    bool m_running;
    int32_t m_originalVSyncValue;
    float m_originalDynamicResScalingValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchySuspensionTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchySuspensionTest__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/HierarchySuspensionTest_PerfTestResult.h>
#include <Modloader/app/structs/List_1_HierarchyDebugMenu_GameObjectItem_.h>
#endif
#undef IL2CPP_STRUCT_HierarchySuspensionTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchySuspensionTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchySuspensionTest__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchySuspensionTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchySuspensionTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
