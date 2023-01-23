#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EscapeRaceData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EscapeRaceData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceData__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EscapeRaceData__Fields_DEFINED
struct DesiredUberStateComposite;
struct List_1_EquipmentType_;
struct RaceSettings;
struct Transform;
struct List_1_SceneMetaData_;
struct List_1_Moon_MoonReference_1__13;
struct TriggerColliderCallback;
struct BooleanUberState;
struct PlayerInsideZoneChecker__Array;
struct String;
struct EscapeRaceData__Fields {
    struct MonoBehaviour__Fields _;
    struct DesiredUberStateComposite* m_stateOverride;
    struct List_1_EquipmentType_* m_disabledAbilities;
    struct RaceSettings* m_raceSettings;
    struct Transform* m_startLineTransform;
    struct Transform* m_endTransform;
    struct List_1_SceneMetaData_* m_requiredPreviewScenes;
    struct List_1_Moon_MoonReference_1__13* m_raceSyncables;
    struct TriggerColliderCallback* m_endTriggerCollider;
    struct BooleanUberState* RaceInProgressState;
    struct PlayerInsideZoneChecker__Array* m_raceAreaCheckers;
    struct String* m_leaderBoardId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EscapeRaceData__Fields_FWDDECL)
#define IL2CPP_STRUCT_EscapeRaceData__Fields_FWDDECL
#include <Modloader/app/structs/BooleanUberState.h>
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__13.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Array.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TriggerColliderCallback.h>
#endif
#undef IL2CPP_STRUCT_EscapeRaceData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EscapeRaceData__Fields_FWDDECL)
#include <Modloader/app/structs/EscapeRaceData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EscapeRaceData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
