#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTester__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTester__Fields_DEFINED)
#include <Modloader/app/structs/HierarchyTester_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_HierarchyTester_State__Enum_DEFINED)
#define IL2CPP_STRUCT_HierarchyTester__Fields_DEFINED
struct Action;
struct PreparationTask;
struct FinishTask;
struct CompositeTask;
struct IProfilingDataProvider;
struct SceneRoot;
struct GameObject;
struct List_1_UnityEngine_Vector3_;
struct SceneTestData;
struct HierarchyTestOutput;
struct HierarchyTester__Fields {
    struct MonoBehaviour__Fields _;
    struct Action* OnStarted;
    struct Action* OnFinished;
    HierarchyTester_State__Enum m_currentState;

    struct PreparationTask* m_preparationTask;
    struct FinishTask* m_finishTask;
    struct CompositeTask* m_prepareSamplesTask;
    struct CompositeTask* m_processingTask;
    struct IProfilingDataProvider* m_dataProvider;
    struct SceneRoot* m_currentSceneRoot;
    int32_t m_maxObjectsToScan;
    struct GameObject* m_rootGameObject;
    struct List_1_UnityEngine_Vector3_* m_cameraSamplePoints;
    struct SceneTestData* m_dataModel;
    struct HierarchyTestOutput* m_output;
    bool m_usePrepareAndFinishTasks;
    float m_scanningStartTime;
    int32_t m_scannedObjects;
    float m_progress;
    float _EstimateTime_k__BackingField;
    int32_t m_objectsCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTester__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTester__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CompositeTask.h>
#include <Modloader/app/structs/FinishTask.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HierarchyTestOutput.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/PreparationTask.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneTestData.h>
#endif
#undef IL2CPP_STRUCT_HierarchyTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTester__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTester__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyTester__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTester__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
