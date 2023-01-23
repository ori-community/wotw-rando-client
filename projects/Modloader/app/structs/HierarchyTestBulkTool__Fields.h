#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTestBulkTool__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTestBulkTool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkTool__Fields_DEFINED)
#include <Modloader/app/structs/HierarchyTestBulkTool_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_DEFINED)
#define IL2CPP_STRUCT_HierarchyTestBulkTool__Fields_DEFINED
struct Queue_1_RuntimeSceneMetaData_;
struct HierarchyTestBulkToolData;
struct HierarchyTestBulkOutput;
struct HierarchyTester;
struct RuntimeSceneMetaData;
struct PreparationTask;
struct FinishTask;
struct String;
struct HierarchyTestBulkTool__Fields {
    struct MonoBehaviour__Fields _;
    struct Queue_1_RuntimeSceneMetaData_* m_queue;
    int32_t m_maxObjectsToScan;
    struct HierarchyTestBulkToolData* m_data;
    struct HierarchyTestBulkOutput* m_output;
    struct HierarchyTester* m_currentTester;
    struct RuntimeSceneMetaData* m_currentScene;
    HierarchyTestBulkTool_State__Enum m_currentState;

    float m_currentStateTime;
    float m_currentStateTimeNoLoading;
    struct PreparationTask* m_preparationTask;
    struct FinishTask* m_finishTask;
    float m_sceneLoadingGraceTime;
    struct String* m_emptyTestSceneName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkTool__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTestBulkTool__Fields_FWDDECL
#include <Modloader/app/structs/FinishTask.h>
#include <Modloader/app/structs/HierarchyTestBulkOutput.h>
#include <Modloader/app/structs/HierarchyTestBulkToolData.h>
#include <Modloader/app/structs/HierarchyTester.h>
#include <Modloader/app/structs/PreparationTask.h>
#include <Modloader/app/structs/Queue_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTestBulkTool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkTool__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTestBulkTool__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyTestBulkTool__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTestBulkTool__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
