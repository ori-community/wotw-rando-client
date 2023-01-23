#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizer__Fields_DEFINED)
#include <Modloader/app/structs/ArtOptimizer_OptimizerState__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ArtOptimizer_OptimizerState__Enum_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizer__Fields_DEFINED
struct String;
struct Action;
struct OptimizationCache;
struct ArtOptimizationDataModel;
struct SceneRoot;
struct PreparationTask_1;
struct CompositeTask;
struct IList_1_UberShaderComponent_;
struct List_1_UnityEngine_Vector3_;
struct ArtOptimizer__Fields {
    struct MonoBehaviour__Fields _;
    bool CustomSelection;
    struct String* SceneGuid;
    struct Action* OnEnterGettingReady;
    struct Action* OnEnterMoving;
    struct Action* OnEnterDone;
    ArtOptimizer_OptimizerState__Enum m_currentState;

    struct OptimizationCache* m_cache;
    struct ArtOptimizationDataModel* m_dataModel;
    struct SceneRoot* m_currentSceneRoot;
    struct String* m_outputFolder;
    int32_t m_currentOperation;
    int32_t m_overallOperations;
    float m_scanningStatrTime;
    bool m_oldEnableDistortion;
    struct PreparationTask_1* m_preparationTask;
    struct CompositeTask* m_prepareSamplesTask;
    struct CompositeTask* m_processingTask;
    struct IList_1_UberShaderComponent_* m_uberShaders;
    struct List_1_UnityEngine_Vector3_* m_cameraSamplePoints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizer__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizer__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ArtOptimizationDataModel.h>
#include <Modloader/app/structs/CompositeTask.h>
#include <Modloader/app/structs/IList_1_UberShaderComponent_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/OptimizationCache.h>
#include <Modloader/app/structs/PreparationTask_1.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizer__Fields_FWDDECL)
#include <Modloader/app/structs/ArtOptimizer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
