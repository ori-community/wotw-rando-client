#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/Dictionary_2_MoonGuid_NearbySceneData_.h>
#include <Modloader/app/structs/HashSet_1_System_UInt32_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IScenesManagerBehaviour.h>
#include <Modloader/app/structs/List_1_MoonGuid_.h>
#include <Modloader/app/structs/List_1_Moon_IRectProvider_.h>
#include <Modloader/app/structs/List_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/LoadSceneMode__Enum.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/Scene.h>
#include <Modloader/app/structs/SceneLoadingQueue.h>
#include <Modloader/app/structs/SceneManagerScene.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneState__Enum.h>
#include <Modloader/app/structs/ScenesManager.h>
#include <Modloader/app/structs/ScenesManager_LoadingCameraState__Enum.h>
#include <Modloader/app/structs/ScenesManager_SceneManagementMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ScenesManager {
    IL2CPP_REGISTER_METHOD(0x00BC1A90, bool, SceneVisibleAtPosition, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BC1C30, bool, SceneIsVisible, app::ScenesManager* this_ptr, app::MoonGuid* scene_guid)
    IL2CPP_REGISTER_METHOD(0x00BC1EB0, bool, SceneIsEnabled_1, app::ScenesManager* this_ptr, app::SceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x00BC1EF0, bool, SceneIsEnabled_2, app::ScenesManager* this_ptr, app::MoonGuid* scene_moon_guid)
    IL2CPP_REGISTER_METHOD(0x00BC20B0, bool, get_IsLoadingScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC21B0, bool, get_IsSceneLoadQueued, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC2200, bool, get_IsLoadingOrEnablingScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC2340, bool, IsLoadingScene, app::ScenesManager* this_ptr, app::Vector3 position, bool include_queued_dependent_scenes)
    IL2CPP_REGISTER_METHOD(0x00BC2990, int32_t, NumLoadingScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00BC2AC0,
        bool,
        PositionInsideSceneStillLoading_1,
        app::ScenesManager* this_ptr,
        app::Vector3 position,
        app::StringBuilder* scenes_list
    )
    IL2CPP_REGISTER_METHOD(0x00BC2F60, bool, PositionInsideSceneStillLoading_2, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BC34F0, bool, GetSceneBoundaryAtPosition_1, app::ScenesManager* this_ptr, app::Vector3 position, app::Rect* bound)
    IL2CPP_REGISTER_METHOD(
        0x00BC3A00,
        bool,
        GetSceneBoundaryAtPosition_2,
        app::ScenesManager* this_ptr,
        app::List_1_System_Int32_* scenes_list,
        app::Vector3 position,
        app::Rect* bound
    )
    IL2CPP_REGISTER_METHOD(0x00BC3D40, bool, IsInsideASceneBoundary, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BC40D0, bool, IsInsideActiveSceneBoundary, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BC4250, bool, IsInsideEnabledSceneBoundary, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BC43D0, bool, IsInsideAScenePaddingBoundary, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BC4720, app::SceneRoot*, FindLoadedSceneRootFromPosition, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x00BC4AF0,
        app::SceneManagerScene*,
        GetFromCurrentScenes_1,
        app::ScenesManager* this_ptr,
        app::RuntimeSceneMetaData* scene_meta_data
    )
    IL2CPP_REGISTER_METHOD(0x00BC4C10, app::SceneManagerScene*, GetFromCurrentScenes_2, app::ScenesManager* this_ptr, app::MoonGuid* guid)
    IL2CPP_REGISTER_METHOD(0x00BC4DA0, app::RuntimeSceneMetaData*, FindRuntimeSceneMetaData_1, app::ScenesManager* this_ptr, app::MoonGuid* scene_guid)
    IL2CPP_REGISTER_METHOD(0x00BC4EA0, app::RuntimeSceneMetaData*, FindRuntimeSceneMetaData_2, app::ScenesManager* this_ptr, app::Scene scene)
    IL2CPP_REGISTER_METHOD(0x00BC5000, app::List_1_RuntimeSceneMetaData_*, ListAllScenesAtPosition, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BC5520, bool, SceneIsLoaded, app::ScenesManager* this_ptr, app::MoonGuid* scene_guid)
    IL2CPP_REGISTER_METHOD(0x00BC56B0, bool, SceneIsLoading, app::ScenesManager* this_ptr, app::MoonGuid* scene_guid)
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::SceneMetaData*,
        GetSceneMetaDataFromRuntimeMetaData,
        app::ScenesManager* this_ptr,
        app::RuntimeSceneMetaData* runtime_meta
    )
    IL2CPP_REGISTER_METHOD(0x00BC5840, app::SceneRoot*, GetRoot, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x00BC58E0, app::RuntimeSceneMetaData*, GetSceneInformation, app::ScenesManager* this_ptr, app::String* scene_name)
    IL2CPP_REGISTER_METHOD(0x00BC5A20, app::SceneManagerScene*, GetSceneManagerScene, app::ScenesManager* this_ptr, app::String* scene_name)
    IL2CPP_REGISTER_METHOD(0x00BC5B90, void, IncreaseRefCountOnResources, app::ScenesManager* this_ptr, app::SceneRoot* root)
    IL2CPP_REGISTER_METHOD(0x00BC5D90, void, DecreaseRefCountOnResources, app::ScenesManager* this_ptr, app::SceneRoot* root)
    IL2CPP_REGISTER_METHOD(0x00BC5F90, app::IScenesManagerBehaviour*, get_CurrentBehaviour, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608710, app::ScenesManager_SceneManagementMode__Enum, get_Mode, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608720, void, set_Mode, app::ScenesManager* this_ptr, app::ScenesManager_SceneManagementMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_ScenesNotLoadedOnTime, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_ScenesNotLoadedOnTime, app::ScenesManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FD590, float, get_PaddingWidthExtension, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A479F0, void, set_PaddingWidthExtension, app::ScenesManager* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00660430, app::HashSet_1_System_UInt32_*, get_SceneEnableSoundBankFilter, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC6900, app::RuntimeSceneMetaData*, GetSceneMetaDataByHash, app::ScenesManager* this_ptr, int32_t hash)
    IL2CPP_REGISTER_METHOD(0x00BC69A0, app::RuntimeSceneMetaData*, GetSceneFromLinearArray, app::ScenesManager* this_ptr, int32_t linear_idx)
    IL2CPP_REGISTER_METHOD(0x00BC69E0, bool, get_InstantLoadScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC6AC0, app::Vector2, get_CurrentCameraTargetPosition, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC6AE0, void, set_CurrentCameraTargetPosition, app::ScenesManager* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00BC6B10, app::Vector2, get_PredictedCameraTargetPosition, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B2A180, app::SceneLoadingQueue*, get_Queue, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC6BB0, app::RuntimeSceneMetaData*, get_CurrentScene, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC6E90, app::RuntimeSceneMetaData*, get_LastCachedCurrentScene, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC6EA0, app::SceneManagerScene*, get_CurrentSceneManagerScene, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC7120, void, Awake, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC7A80, void, Update, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC7B70, void, OnDestroy, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC8170, void, OnSceneLoaded, app::ScenesManager* this_ptr, app::Scene scene, app::LoadSceneMode__Enum load_mode)
    IL2CPP_REGISTER_METHOD(0x00BC82E0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00BC83C0, void, FixedUpdate, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC8620, void, LateUpdate, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC8B90, void, RefreshUnreadiedScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC8DA0, void, RefreshHiddenScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC8FB0, void, UpdatePosition, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9260, void, Start, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9320, void, LoadScenesForStreaming, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9540, void, LoadCurrentEditorScenesInstantly, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9790, void, UnloadScenesForStreaming, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9A10, void, EnableDisabledScenesForStreaming, app::ScenesManager* this_ptr, bool limit_once)
    IL2CPP_REGISTER_METHOD(0x00BC9D40, void, OnGameReset, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9E30, void, OnAspectRatioChanged, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9FC0, void, OnCreateCheckpoint, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9FD0, void, OnCheckpointRestore, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9FE0, void, CleanUpAfterSaveLoad, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BCA100, void, OnTeleport, app::ScenesManager* this_ptr, bool update_camera_target, bool move_camera_to_target)
    IL2CPP_REGISTER_METHOD(0x00BCA470, void, OnPassThroughScrollLock, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BCA520, void, Register, app::ScenesManager* this_ptr, app::SceneRoot* scene_root, bool async)
    IL2CPP_REGISTER_METHOD(
        0x00BCAE60,
        app::SceneRoot*,
        RegisterSceneByName,
        app::ScenesManager* this_ptr,
        app::String* scene_name,
        bool async,
        bool report_failure
    )
    IL2CPP_REGISTER_METHOD(0x00BCB180, void, GenerateGuidToRuntimeSceneMetaDataDictionaryAndQuadTree, app::ScenesManager* this_ptr, bool generate_quad_tree)
    IL2CPP_REGISTER_METHOD(0x00BCB510, void, QueryQuadTree_1, app::ScenesManager* this_ptr, app::Vector3 position, app::List_1_Moon_IRectProvider_* list)
    IL2CPP_REGISTER_METHOD(0x00BCB6F0, void, QueryQuadTreeFast_1, app::ScenesManager* this_ptr, app::Vector3 position, app::List_1_System_Int32_* list)
    IL2CPP_REGISTER_METHOD(0x00BCB8B0, void, QueryQuadTree_2, app::ScenesManager* this_ptr, app::Rect rect, app::List_1_Moon_IRectProvider_* list)
    IL2CPP_REGISTER_METHOD(0x00BCBA90, void, QueryQuadTreeFast_2, app::ScenesManager* this_ptr, app::Rect rect, app::List_1_System_Int32_* list)
    IL2CPP_REGISTER_METHOD(
        0x00BCBC40,
        void,
        RequestAdditivelyLoadScene,
        app::ScenesManager* this_ptr,
        app::RuntimeSceneMetaData* scene_meta_data,
        bool async,
        bool keep_preloaded,
        bool force_load,
        bool load_dependant_scenes,
        bool queue_included_scenes
    )
    IL2CPP_REGISTER_METHOD(0x00BCC120, void, LoadDependantScenes, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* scene_meta_data, bool async)
    IL2CPP_REGISTER_METHOD(0x00BCC370, void, UnloadAllUneededScenes, app::ScenesManager* this_ptr, bool instant)
    IL2CPP_REGISTER_METHOD(0x00BCC380, void, UnloadScenesAtPosition, app::ScenesManager* this_ptr, bool instant, bool unload_as_much_as_possible)
    IL2CPP_REGISTER_METHOD(
        0x00BCC7B0,
        void,
        LoadScenesAtPosition,
        app::ScenesManager* this_ptr,
        app::Vector3 position,
        bool async,
        bool loading_zones,
        bool keep_preloaded,
        bool force_load,
        bool load_dependant_scenes
    )
    IL2CPP_REGISTER_METHOD(
        0x00BCCC80,
        void,
        AdditivelyLoadScene,
        app::ScenesManager* this_ptr,
        app::Vector3 position,
        app::MoonGuid* scene_guid,
        bool async,
        bool loading_zones,
        bool keep_preloaded
    )
    IL2CPP_REGISTER_METHOD(
        0x00BCD0F0,
        void,
        AdditivelyLoadScenesInsideRect,
        app::ScenesManager* this_ptr,
        app::Rect rect,
        bool async,
        bool loading_zones,
        bool keep_preloaded,
        bool force_load,
        bool load_dependent_scenes,
        bool queue_included_scenes
    )
    IL2CPP_REGISTER_METHOD(0x00BCD590, void, EnableDisabledScenesAtPosition, app::ScenesManager* this_ptr, bool limit_once, bool async)
    IL2CPP_REGISTER_METHOD(0x00BCDA00, void, DisableEnabledScene, app::ScenesManager* this_ptr, app::SceneManagerScene* scene, bool async)
    IL2CPP_REGISTER_METHOD(0x00BCDB50, void, EnableDisabledScene, app::ScenesManager* this_ptr, app::SceneManagerScene* scene, bool async)
    IL2CPP_REGISTER_METHOD(0x00BCDDE0, void, UpdateDependantScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BCE460, void, UnloadDependantScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BCE6E0, void, ClearQueuedScenesToLoad, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BCE7A0, bool, IsSceneQueued, app::ScenesManager* this_ptr, app::MoonGuid* guid)
    IL2CPP_REGISTER_METHOD(0x00BCE7E0, bool, IsSceneFirstInQueue, app::ScenesManager* this_ptr, app::MoonGuid* guid)
    IL2CPP_REGISTER_METHOD(0x00BCE820, void, ProcessSceneLoadingQueue, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BCEF60, void, DetectScenesNotLoadedInTime, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BCF0B0, void, SetSceneLoadingCritical, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0520, bool, get_IsCameraAboutToLock, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00693140, void, set_IsCameraAboutToLock, app::ScenesManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00BCF150, bool, IsSceneBlockingCamera, app::ScenesManager* this_ptr, app::MoonGuid* scene_guid)
    IL2CPP_REGISTER_METHOD(0x00BCF2D0, void, GetCameraBlockingScenesList, app::ScenesManager* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x00BCF6D0, app::SceneState__Enum, GetWorstBlockingSceneState, app::ScenesManager* this_ptr, bool* any_queued_scenes)
    IL2CPP_REGISTER_METHOD(0x00BCFAF0, bool, CanSceneBlockCamera, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x00BCFCB0, bool, AnyMissingScenesAtCurrentPosition, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD07A0, void, SetSceneManagementMode, app::ScenesManager* this_ptr, app::ScenesManager_SceneManagementMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x00BD0950, void, SetTargetPositions, app::ScenesManager* this_ptr, app::Vector3 target)
    IL2CPP_REGISTER_METHOD(0x00BD0A60, app::Rect, GetClampedRect_1, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BD0C80, app::Rect, GetClampedRect_2, app::ScenesManager* this_ptr, app::Vector3 position, app::List_1_System_Int32_* scenes_list)
    IL2CPP_REGISTER_METHOD(0x00BD0EA0, bool, get_ResourcesNeedUnloading, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD0EB0, void, LoadScenesThatStillNeedToBeStreamed, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD1060, void, LoadDependantSceneForCurrent, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BC9E30, void, UpdatePaddingWidthExtension, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD11C0, void, ClearCameraPuppetPositions, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD12B0, void, PreloadScene_1, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x00BD1490, void, PreloadScene_2, app::ScenesManager* this_ptr, app::SceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x00BD1650, bool, CanLevelBeLoaded, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x00BD17F0, bool, get_IsMasterTimelinePlaying, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD18D0, bool, CanUnload, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x00BD1A50, bool, CanDisable, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x00BD1BD0, void, ResetDistanceCaches, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD1DB0, void, ReleaseUnusedResources, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD1DC0, void, OnSceneStartCompleted, app::ScenesManager* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x00BD1E10, void, CheckForScenesFinishedLoading, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00BD1EC0,
        void,
        EnableWithManualUnSuspend,
        app::ScenesManager* this_ptr,
        app::MoonGuid* scene_guid,
        app::Action_1_Boolean_* after_enable
    )
    IL2CPP_REGISTER_METHOD(0x00BD2130, void, ManuallyUnsuspendScene, app::ScenesManager* this_ptr, app::MoonGuid* scene_guid)
    IL2CPP_REGISTER_METHOD(0x00BD2480, void, OnFinishedStreamingInstall, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00BD2510,
        app::IEnumerator*,
        WaitForSceneToLoadAndSendTelemetryEvent,
        app::ScenesManager* this_ptr,
        app::AsyncOperation_1* load_operation,
        app::RuntimeSceneMetaData* scene_meta_data
    )
    IL2CPP_REGISTER_METHOD(0x00BD2680, app::IEnumerator*, HandleSceneLoadedEvent, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x00BD27E0, void, Serialize, app::ScenesManager* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(
        0x00BD2960,
        void,
        FindNearbyScenes,
        app::ScenesManager* this_ptr,
        app::RuntimeSceneMetaData* scene,
        app::Dictionary_2_MoonGuid_NearbySceneData_* nearby_scenes,
        int32_t hop
    )
    IL2CPP_REGISTER_METHOD(0x00BD2C50, app::List_1_MoonGuid_*, GetConnectedScenesCached, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(
        0x00BD3090,
        void,
        GetConnectedScenes,
        app::ScenesManager* this_ptr,
        app::RuntimeSceneMetaData* meta_data,
        app::List_1_RuntimeSceneMetaData_* connected_scenes
    )
    IL2CPP_REGISTER_METHOD(0x00BD36A0, void, MarkActiveScenesAsKeepLoaded, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD3A50, void, ClearKeepLoadedForCheckpoint, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD3B30, void, PreventUnloading_1, app::ScenesManager* this_ptr, app::SceneMetaData* meta_data, bool prevent_disabling)
    IL2CPP_REGISTER_METHOD(0x00BD3BA0, void, UnsetPreventUnloading_1, app::ScenesManager* this_ptr, app::SceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x00BD3C00, void, PreventUnloading_2, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta_data, bool prevent_disabling)
    IL2CPP_REGISTER_METHOD(0x00BD3F50, void, UnsetPreventUnloading_2, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x00BD40E0, void, ClearPreventUnloading, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD4240, void, AllowUnloadingOnAllScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD4330, void, AllowUnloadingOnScenes, app::ScenesManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x00BD44F0,
        void,
        AdditivelyLoadSceneFile,
        app::ScenesManager* this_ptr,
        app::RuntimeSceneMetaData* runtime_meta,
        bool async,
        bool keep_preloaded,
        bool load_dependant_scenes,
        bool scene_already_loaded
    )
    IL2CPP_REGISTER_METHOD(
        0x00BD4BD0,
        app::AsyncOperation_1*,
        AdditivelyLoadSceneFileEditor,
        app::ScenesManager* this_ptr,
        app::RuntimeSceneMetaData* runtime_scene_meta_data,
        bool async
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartUnloadingScene, app::ScenesManager* this_ptr, app::Scene scene)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterUnloadOperation, app::ScenesManager* this_ptr, app::AsyncOperation_1* unload_op, int32_t scene_id)
    IL2CPP_REGISTER_METHOD(0x00BD4CC0, bool, UnloadScene, app::ScenesManager* this_ptr, app::SceneManagerScene* scene, bool keep_in_memory, bool instant)
    IL2CPP_REGISTER_METHOD(0x00BD50D0, void, UnloadAllScenes, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD5370, void, RemoveScene, app::ScenesManager* this_ptr, app::SceneManagerScene* scene, bool instant)
    IL2CPP_REGISTER_METHOD(0x00BD5470, bool, CancelScene, app::ScenesManager* this_ptr, app::SceneManagerScene* scene)
    IL2CPP_REGISTER_METHOD(0x00BD54E0, void, MarkLoadingScenesAsCancel, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetupScenesToStreamIn, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD5620, void, SetStreamingAllScenes, app::ScenesManager* this_ptr, bool stream_all)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StreamedScenesUpdated, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD5730, void, SetSceneHidden, app::ScenesManager* this_ptr, app::MoonGuid* scene_guid, bool hidden)
    IL2CPP_REGISTER_METHOD(0x00BD59C0, void, ApplySceneHidden, app::ScenesManager* this_ptr, app::MoonGuid* scene_guid, bool hidden)
    IL2CPP_REGISTER_METHOD(0x00BD5D60, void, SetBackgroundSceneHidden, app::ScenesManager* this_ptr, app::MoonGuid* guid, bool hidden)
    IL2CPP_REGISTER_METHOD(
        0x00BD5EE0,
        void,
        GetShowingAndHiddenSceneCount,
        app::ScenesManager* this_ptr,
        app::MoonGuid* guid,
        int32_t* showing_count,
        int32_t* hidden_count
    )
    IL2CPP_REGISTER_METHOD(0x00BD6130, bool, CanSceneBeHidden, app::ScenesManager* this_ptr, app::MoonGuid* guid)
    IL2CPP_REGISTER_METHOD(0x00BD6170, bool, ShouldSceneBeHidden, app::ScenesManager* this_ptr, app::MoonGuid* guid)
    IL2CPP_REGISTER_METHOD(0x00BD61B0, void, CheckVisibilityInPadding, app::ScenesManager* this_ptr, app::SceneManagerScene* scene)
    IL2CPP_REGISTER_METHOD(0x00BD63F0, void, CheckVisibilityOutsidePadding, app::ScenesManager* this_ptr, app::SceneManagerScene* sm_scene)
    IL2CPP_REGISTER_METHOD(0x00BD67C0, void, TestForFallOutOfWorld, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD6CB0, void, AddOutOfWorldTelemetryGraceTime, )
    IL2CPP_REGISTER_METHOD(0x00BD6D90, app::IEnumerator*, ShowFellOutOfWorldMessage, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD6ED0, void, ForceTestForOutOfWorld, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD6EF0, void, DrawScenesManagerDebugData, app::ScenesManager* this_ptr, bool extended)
    IL2CPP_REGISTER_METHOD(0x00BD8420, bool, get_HasReportedScenesLoading, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD8430, void, set_HasReportedScenesLoading, app::ScenesManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00BD8440, void, ReportScenesThatAreStillLoading, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD8530, void, DebugLog, app::ScenesManager* this_ptr, app::String* scene, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendSceneLoadBeginTelemetryEvent, app::RuntimeSceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendUnloadTransformsBeginTelemetryEvent, app::SceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendUnloadTransformsEndTelemetryEvent, app::SceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendUnloadResourcesBeginTelemetryEvent, app::SceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendUnloadResourcesEndTelemetryEvent, app::SceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendSceneLoadEndTelemetryEvent, app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendAwakeBeginTelemetryEvent, app::SceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendAwakeEndTelemetryEvent, app::SceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendStartBeginTelemetryEvent, app::SceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendStartEndTelemetryEvent, app::SceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendEnableBeginTelemetryEvent, app::SceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendEnableEndTelemetryEvent, app::SceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendDisableBeginTelemetryEvent, app::SceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendDisableEndTelemetryEvent, app::SceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendSceneTelementryEvent, app::MoonTelemetrySceneEvent* scene_event)
    IL2CPP_REGISTER_METHOD(0x00BD8550, app::ScenesManager_LoadingCameraState__Enum, get_CameraState, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD8580, bool, get_SimulateBadStreaming, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD8590, void, set_SimulateBadStreaming, app::ScenesManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DisableBuildPipelineInterfacesCallbacks, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BD8AF0, void, ctor, app::ScenesManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDA620, void, cctor, )
} // namespace app::classes::ScenesManager
