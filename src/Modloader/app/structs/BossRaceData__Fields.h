#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossRaceData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossRaceData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossRaceData__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaceData_RaceStartFaceDirection__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_RaceData_RaceStartFaceDirection__Enum_DEFINED)
#define IL2CPP_STRUCT_BossRaceData__Fields_DEFINED
struct Condition_1;
struct DesiredUberStateComposite;
struct List_1_EquipmentType_;
struct RaceSettings;
struct Transform;
struct List_1_SceneMetaData_;
struct List_1_Moon_MoonReference_1__13;
struct BooleanUberState;
struct String;
struct BossRaceData__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1* m_getReadyCondition;
    struct Condition_1* m_beatenCondition;
    struct Condition_1* m_postFinishCondition;
    struct DesiredUberStateComposite* m_stateOverride;
    struct List_1_EquipmentType_* m_disabledAbilities;
    struct RaceSettings* m_raceSettings;
    struct Transform* m_startLineTransform;
    bool PlaceOriDirectlyAtStartTransform;
    struct Transform* m_endTransform;
    struct List_1_SceneMetaData_* m_requiredPreviewScenes;
    struct List_1_Moon_MoonReference_1__13* m_raceSyncables;
    RaceData_RaceStartFaceDirection__Enum StartFacingDirection;

    struct BooleanUberState* RaceInProgressState;
    float RaceStartOffset;
    struct String* m_leaderBoardId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossRaceData__Fields_FWDDECL)
#define IL2CPP_STRUCT_BossRaceData__Fields_FWDDECL
#include <Modloader/app/structs/BooleanUberState.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__13.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BossRaceData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossRaceData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BossRaceData__Fields_FWDDECL)
#include <Modloader/app/structs/BossRaceData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossRaceData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
