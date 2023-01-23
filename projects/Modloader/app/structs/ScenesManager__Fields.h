#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/ScenesManager_SceneManagementMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED) && defined(IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ScenesManager__Fields_DEFINED
struct SceneResourcesUnloadSystem;
struct SceneRoot;
struct IScenesManagerBehaviour__Array;
struct ScenesManagerSettings;
struct List_1_SceneManagerScene_;
struct DestroyManager;
struct MessageProvider;
struct List_1_System_Tuple_2__3;
struct List_1_RuntimeSceneMetaData_;
struct Action;
struct SoundBankCollection;
struct HashSet_1_System_UInt32_;
struct HashSet_1_System_Int32_;
struct HashSet_1_RuntimeSceneMetaData_;
struct Dictionary_2_System_String_System_Boolean_;
struct RuntimeSceneMetaData__Array;
struct Dictionary_2_MoonGuid_RuntimeSceneMetaData_;
struct Dictionary_2_System_Int32_RuntimeSceneMetaData_;
struct AsyncOperation_1;
struct List_1_System_String_;
struct QuadTree;
struct List_1_System_Int32_;
struct HashSet_1_MoonGuid_;
struct ScenesManagerContext;
struct SceneLoadingQueue;
struct RuntimeSceneMetaData;
struct Type__Array;
struct Dictionary_2_MoonGuid_List_1_MoonGuid_;
struct GUIStyle;
struct Font;
struct List_1_System_Tuple_2__4;
struct ScenesManager__Fields {
    struct SaveSerialize__Fields _;
    bool BlockSceneEnabledQuery;
    struct SceneResourcesUnloadSystem* m_sceneResourcesUnloadSystem;
    struct SceneRoot* m_lastFoundSceneRootFromPosition;
    struct Nullable_1_UnityEngine_Vector3_ m_lastFoundSceneRootPosition;
    struct IScenesManagerBehaviour__Array* m_behaviours;
    bool UseLegacyBehaviour;
    ScenesManager_SceneManagementMode__Enum _Mode_k__BackingField;

    struct ScenesManagerSettings* Settings;
    struct List_1_SceneManagerScene_* ActiveScenes;
    bool ActiveScenesDirty;
    struct DestroyManager* DestroyManager;
    struct MessageProvider* FellOutOfWorldMessage;
    struct List_1_System_Tuple_2__3* m_scenesToSetHidden;
    bool _ScenesNotLoadedOnTime_k__BackingField;
    float _PaddingWidthExtension_k__BackingField;
    struct List_1_RuntimeSceneMetaData_* AllScenes;
    struct Rect QuadTreeRootRect;
    int32_t MaxTreeDepth;
    int32_t NumObjectsToCauseSubdivision;
    float BlockedCameraSpeedMovementFactor;
    float BlockedCameraTargetMovementFactor;
    struct Action* OnSceneRegistered;
    struct SoundBankCollection* SceneEnableSoundBankCollection;
    struct HashSet_1_System_UInt32_* m_sceneEnableSoundBankFilter;
    int32_t m_resourcesNeedUnloading;
    struct HashSet_1_System_Int32_* m_scenesToDisable;
    struct HashSet_1_System_Int32_* m_scenesToInclude;
    struct HashSet_1_RuntimeSceneMetaData_* m_scenesToEnable;
    struct HashSet_1_RuntimeSceneMetaData_* m_scenesToKeepLoaded;
    struct List_1_SceneManagerScene_* m_enablingScenes;
    struct Dictionary_2_System_String_System_Boolean_* m_canBeStreamed;
    struct RuntimeSceneMetaData__Array* m_linearScenesArray;
    struct Dictionary_2_MoonGuid_RuntimeSceneMetaData_* m_guidToRuntimeSceneMetaDatas;
    struct Dictionary_2_System_Int32_RuntimeSceneMetaData_* m_sceneNameToRuntimeSceneMetaDatas;
    struct AsyncOperation_1* m_currentLoad;
    struct List_1_System_String_* m_scenesToLoad;
    struct List_1_System_String_* m_backgroundsToLoad;
    struct List_1_RuntimeSceneMetaData_* m_scenesToStreamIn;
    struct QuadTree* m_scenesQuadTree;
    struct List_1_System_Int32_* m_lockedScenes;
    struct List_1_System_Int32_* m_lockedEnabledScenes;
    struct Rect m_cachedSceneBoundaryThisFrame;
    struct Nullable_1_UnityEngine_Vector3_ m_positionOfCachedSceneBoundary;
    struct HashSet_1_MoonGuid_* m_scenes;
    struct ScenesManagerContext* m_context;
    struct SceneLoadingQueue* m_loadingQueue;
    float LastSceneLoadTime;
    struct Vector2 m_currentCameraTargetPosition;
    bool m_currentSceneIsDirty;
    struct RuntimeSceneMetaData* m_currentScene;
    struct RuntimeSceneMetaData* m_cachedCurrentScene;
    int32_t m_resourceUploadFrames;
    bool m_wasLoading;
    int32_t m_numLoadingScenes;
    struct Type__Array* m_jobCompletionExclusions;
    bool m_doingOnTeleport;
    struct Rect m_boundsCheckRect;
    struct Rect m_boundsCheckRectExtended;
    struct List_1_RuntimeSceneMetaData_* m_potentialBlockers;
    bool _IsCameraAboutToLock_k__BackingField;
    struct Dictionary_2_MoonGuid_List_1_MoonGuid_* m_cache;
    struct List_1_RuntimeSceneMetaData_* m_tempList;
    float m_testDelayTime;
    float m_telemetrySpamProtection;
    struct GUIStyle* m_frameworkDebugLabelStyle;
    struct Font* m_debugFont;
    int32_t m_lastScreenHeight;
    bool _HasReportedScenesLoading_k__BackingField;
    bool m_simulateBadStreaming;
    struct List_1_System_Tuple_2__4* m_badStreamingSceneList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenesManager__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/DestroyManager.h>
#include <Modloader/app/structs/Dictionary_2_MoonGuid_List_1_MoonGuid_.h>
#include <Modloader/app/structs/Dictionary_2_MoonGuid_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Boolean_.h>
#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/HashSet_1_MoonGuid_.h>
#include <Modloader/app/structs/HashSet_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/HashSet_1_System_UInt32_.h>
#include <Modloader/app/structs/IScenesManagerBehaviour__Array.h>
#include <Modloader/app/structs/List_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/List_1_SceneManagerScene_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__3.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__4.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/QuadTree.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/RuntimeSceneMetaData__Array.h>
#include <Modloader/app/structs/SceneLoadingQueue.h>
#include <Modloader/app/structs/SceneResourcesUnloadSystem.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/ScenesManagerContext.h>
#include <Modloader/app/structs/ScenesManagerSettings.h>
#include <Modloader/app/structs/SoundBankCollection.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_ScenesManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManager__Fields_FWDDECL)
#include <Modloader/app/structs/ScenesManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
