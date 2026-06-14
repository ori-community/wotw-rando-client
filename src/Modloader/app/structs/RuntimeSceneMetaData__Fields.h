#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_DEFINED
struct String;
struct MoonGuid;
struct List_1_UnityEngine_Rect_;
struct List_1_System_Single_;
struct Condition_1;
struct List_1_UnityEngine_Vector3_;
struct List_1_MoonGuid_;
struct List_1_System_Int32_;
struct Dictionary_2_MoonGuid_NearbySceneData_;
struct SceneMetaData;
struct SceneSoundBankData;
struct Boolean__Array;
struct __declspec(align(8)) RuntimeSceneMetaData__Fields {
    struct String* Scene;
    struct Vector2 PlaceholderPosition;
    struct MoonGuid* SceneMoonGuid;
    int32_t LinearId;
    struct List_1_UnityEngine_Rect_* SceneLoadingBoundaries;
    struct List_1_UnityEngine_Rect_* SceneBoundaries;
    struct List_1_UnityEngine_Rect_* ScenePaddingBoundaries;
    struct List_1_System_Single_* ScenePaddingWideScreenExpansion;
    struct Condition_1* LoadingCondition;
    struct List_1_UnityEngine_Vector3_* FPSTestPosition;
    struct List_1_MoonGuid_* IncludedScenes;
    struct List_1_System_Int32_* IncludedScenesLinear;
    bool SceneInCurrentFrame;
    struct Dictionary_2_MoonGuid_NearbySceneData_* m_nearbyReachableScenes;
    int32_t SceneUtility;
    bool DependantScene;
    bool IsMasterScene;
    bool IsRecordableMasterScene;
    bool MasterSceneCompleted;
    struct Rect m_totalRect;
    bool m_doneTotal;
    bool VisibleOnlyInPadding;
    struct SceneMetaData* VisibleOnlyInPaddingDependantScene;
    bool OverrideOriPositionInMap;
    struct Vector3 MapPositionOverride;
    float DynamicCameraEnemyFOVMultiplier;
    bool CanTimeSlice;
    struct SceneSoundBankData* SoundBankData;
    struct Boolean__Array* m_IsInsideSceneBoundsIsCached;
    struct Boolean__Array* m_cachedIsInsideSceneBounds;
    struct Boolean__Array* m_IsInsideScenePaddingBoundsIsCached;
    struct Boolean__Array* m_cachedIsInsideScenePaddingBounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Dictionary_2_MoonGuid_NearbySceneData_.h>
#include <Modloader/app/structs/List_1_MoonGuid_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SceneSoundBankData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeSceneMetaData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeSceneMetaData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
