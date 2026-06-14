#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_DEFINED
struct String;
struct List_1_SpiritShardType_;
struct List_1_DebugTeleportSettings_;
struct StressTesterCinematicReporter;
struct GeneralDebugMenuPage_SceneInfo__Array;
struct GeneralDebugMenuPage__Fields {
    struct MonoBehaviour__Fields _;
    struct String* m_name;
    bool m_showSceneFrameworkDebug;
    bool m_showSceneFrameworkDebugExtended;
    bool m_dynamicHudDebug;
    struct List_1_SpiritShardType_* m_shards;
    struct List_1_DebugTeleportSettings_* Areas;
    struct List_1_DebugTeleportSettings_* Cinematics;
    struct List_1_DebugTeleportSettings_* Vignettes;
    struct List_1_DebugTeleportSettings_* Escapes;
    struct List_1_DebugTeleportSettings_* GameStates;
    struct List_1_DebugTeleportSettings_* CombatPresets;
    struct StressTesterCinematicReporter* m_stressTesterCinematicReporter;
    struct GeneralDebugMenuPage_SceneInfo__Array* allScenes;
    struct GeneralDebugMenuPage_SceneInfo__Array* gameScenes;
    struct GeneralDebugMenuPage_SceneInfo__Array* revisedScenes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_FWDDECL)
#define IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_FWDDECL
#include <Modloader/app/structs/GeneralDebugMenuPage_SceneInfo__Array.h>
#include <Modloader/app/structs/List_1_DebugTeleportSettings_.h>
#include <Modloader/app/structs/List_1_SpiritShardType_.h>
#include <Modloader/app/structs/StressTesterCinematicReporter.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_FWDDECL)
#include <Modloader/app/structs/GeneralDebugMenuPage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GeneralDebugMenuPage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
