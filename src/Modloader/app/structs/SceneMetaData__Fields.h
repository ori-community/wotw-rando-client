#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneMetaData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData__Fields_DEFINED)
#include <Modloader/app/structs/SceneType__Enum.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/UberAtlasArea__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_SceneType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_UberAtlasArea__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneMetaData__Fields_DEFINED
struct SceneMetaData_SeinInitialValuesWotW;
struct SceneMetaData_SeinInitialValuesBlindForest;
struct List_1_SceneMetaData_SceneSavePedestal_;
struct MoonGuid;
struct List_1_SceneMetaData_;
struct List_1_UnityEngine_Rect_;
struct List_1_System_Single_;
struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo_;
struct Condition_1;
struct String;
struct List_1_SceneMetaData_WorldMapIcon_;
struct List_1_SceneMetaData_RaceInfo_;
struct List_1_SceneMetaData_PlayerAbilityInfo_;
struct List_1_UnityEngine_Vector3_;
struct List_1_ScreenshotIcon_;
struct List_1_ScreenshotText_;
struct List_1_ScreenshotIconData_;
struct List_1_ScreenshotLegacySetup_;
struct List_1_ScreenshotCheckpointData_;
struct Texture;
struct SceneTracking;
struct List_1_Moon_ReviewFramework_ReviewTargetMetadata_;
struct ArtOptimizerDataContainer;
struct SceneSoundBankData;
struct SceneMetaData__Fields {
    struct ScriptableObject__Fields _;
    struct SceneMetaData_SeinInitialValuesWotW* InitialValuesWisp;
    struct SceneMetaData_SeinInitialValuesBlindForest* InitialValuesBlindForest;
    struct List_1_SceneMetaData_SceneSavePedestal_* Pedestals;
    bool Exclude;
    struct MoonGuid* SceneMoonGuid;
    int32_t LinearId;
    struct List_1_SceneMetaData_* IncludedScenes;
    bool DependantScene;
    bool ShowOnlyInPadding;
    SceneType__Enum SceneType;

    bool PrewarmEvenIfCinematic;
    float EstimatedPlayDuration;
    bool ExcludeFromFogTask;
    bool RecoverSwitchDisableGroups;
    struct List_1_UnityEngine_Rect_* SceneLoadingBoundaries;
    struct List_1_UnityEngine_Rect_* SceneBoundaries;
    struct List_1_UnityEngine_Rect_* ScenePaddingBoundaries;
    struct List_1_System_Single_* ScenePaddingWideScreenExpansion;
    struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo_* ReverseLoadingBoundaries;
    struct Condition_1* LoadingCondition;
    struct Vector3 SeinPlaceholderPosition;
    struct Vector3 RootPosition;
    bool OverrideOriPositionInMap;
    struct Vector3 OverridePosition;
    struct String* Notes;
    struct List_1_SceneMetaData_* ConnectedScenes;
    bool ExcludeIcons;
    struct List_1_SceneMetaData_WorldMapIcon_* Icons;
    struct List_1_SceneMetaData_RaceInfo_* Races;
    struct List_1_SceneMetaData_PlayerAbilityInfo_* AbilityTrees;
    bool ShouldRegenerateAllGUIDs;
    struct List_1_UnityEngine_Vector3_* FPSTestPosition;
    struct List_1_ScreenshotIcon_* ScreenshotIcons;
    struct List_1_ScreenshotText_* ScreenshotText;
    struct List_1_ScreenshotIconData_* ScreenshotIconsNew;
    struct List_1_ScreenshotLegacySetup_* LegacySetups;
    struct List_1_ScreenshotCheckpointData_* Checkpoints;
    float SceneTimelineDuration;
    bool IsMasterScene;
    bool InArtMode;
    bool IsRecordableMasterScene;
    bool CanTimeSlice;
    UberAtlasArea__Enum AtlasAreaOverride;

    bool HasBigDOF;
    float DynamicCameraEnemyFOVMultiplier;
    struct String* m_cachedSceneMoonGuid;
    struct String* m_sceneTexturePath;
    struct String* m_sceneSolidsTexturePath;
    struct String* m_previousTexturePath;
    struct String* m_previousSolidsTexturePath;
    struct Texture* m_previousTexture;
    struct Texture* m_previousSolidsTexture;
    struct SceneTracking* SceneTracking;
    struct List_1_Moon_ReviewFramework_ReviewTargetMetadata_* ReviewModules;
    struct ArtOptimizerDataContainer* ArtOptimizationData;
    struct SceneSoundBankData* SoundBankData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneMetaData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneMetaData__Fields_FWDDECL
#include <Modloader/app/structs/ArtOptimizerDataContainer.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/List_1_Moon_ReviewFramework_ReviewTargetMetadata_.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/List_1_SceneMetaData_PlayerAbilityInfo_.h>
#include <Modloader/app/structs/List_1_SceneMetaData_RaceInfo_.h>
#include <Modloader/app/structs/List_1_SceneMetaData_ReverseSceneLoadingZoneInfo_.h>
#include <Modloader/app/structs/List_1_SceneMetaData_SceneSavePedestal_.h>
#include <Modloader/app/structs/List_1_SceneMetaData_WorldMapIcon_.h>
#include <Modloader/app/structs/List_1_ScreenshotCheckpointData_.h>
#include <Modloader/app/structs/List_1_ScreenshotIconData_.h>
#include <Modloader/app/structs/List_1_ScreenshotIcon_.h>
#include <Modloader/app/structs/List_1_ScreenshotLegacySetup_.h>
#include <Modloader/app/structs/List_1_ScreenshotText_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesBlindForest.h>
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesWotW.h>
#include <Modloader/app/structs/SceneSoundBankData.h>
#include <Modloader/app/structs/SceneTracking.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_SceneMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneMetaData__Fields_FWDDECL)
#include <Modloader/app/structs/SceneMetaData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneMetaData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
