#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerBehaviourUtility__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerBehaviourUtility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviourUtility__Fields_DEFINED)
#include <Modloader/app/structs/NearbySceneData.h>
#include <Modloader/app/structs/ScenesManagerBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_NearbySceneData_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerBehaviourUtility__Fields_DEFINED
struct HashSet_1_RuntimeSceneMetaData_;
struct List_1_SceneManagerScene_;
struct List_1_System_Int32_;
struct ScenesManagerPrediction;
struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array;
struct List_1_RuntimeSceneMetaData_;
struct ScenesManagerBehaviourUtility__Fields {
    struct ScenesManagerBehaviour__Fields _;
    struct HashSet_1_RuntimeSceneMetaData_* m_scenesToEnable;
    struct HashSet_1_RuntimeSceneMetaData_* m_scenesToReady;
    struct List_1_SceneManagerScene_* m_enablingScenes;
    struct List_1_System_Int32_* m_quadTreeQueryExtrapolatedPos;
    bool m_scenesIsInsideBoundsCacheCleared;
    struct ScenesManagerPrediction* m_prediction;
    bool UtilityUseBoundsDistance;
    bool UtilityUsePredictedBoundsDistance;
    bool UtilityUseHops;
    bool UtilityUsePositionInBounds;
    bool UtilityUsePredictedPositionInBounds;
    int32_t m_updateTypeIndex;
    bool m_timeSliceUtilityUpdatePrevState;
    bool m_reset;
    int32_t m_activeCurrentListIdx;
    int32_t m_activeUpdateIdx;
    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array* m_utilityActiveScenesLists;
    int32_t m_currentSceneHash;
    int32_t m_nearbyCurrentListIdx;
    int32_t m_nearbyUpdateIdx;
    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array* m_utilityNearbyScenesLists;
    struct List_1_RuntimeSceneMetaData_* m_scenesToLoadByUtility;
    struct List_1_RuntimeSceneMetaData_* m_previousUtilityScenes;
    struct NearbySceneData empty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviourUtility__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerBehaviourUtility__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/List_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/List_1_SceneManagerScene_.h>
#include <Modloader/app/structs/List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/ScenesManagerPrediction.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerBehaviourUtility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviourUtility__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerBehaviourUtility__Fields_FWDDECL)
#include <Modloader/app/structs/ScenesManagerBehaviourUtility__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerBehaviourUtility__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
