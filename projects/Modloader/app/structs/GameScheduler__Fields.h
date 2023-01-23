#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameScheduler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameScheduler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameScheduler__Fields_DEFINED)
#define IL2CPP_STRUCT_GameScheduler__Fields_DEFINED
struct UberDelegate_1_SceneRoot_;
struct UberDelegate;
struct __declspec(align(8)) GameScheduler__Fields {
    struct UberDelegate_1_SceneRoot_* OnSceneRootLoadEarlyStart;
    struct UberDelegate_1_SceneRoot_* OnSceneStartLateBeforeSerialize;
    struct UberDelegate_1_SceneRoot_* OnSceneStartLateAfterSerialize;
    struct UberDelegate_1_SceneRoot_* OnSceneRootPreEnabled;
    struct UberDelegate_1_SceneRoot_* OnSceneRootEnabledAfterSerialize;
    struct UberDelegate_1_SceneRoot_* OnSceneRootDisabled;
    struct UberDelegate* OnGameAwake;
    struct UberDelegate* OnGameStart;
    struct UberDelegate* OnGameStartLate;
    struct UberDelegate* OnGameSerializeLoad;
    struct UberDelegate* OnGameSerializeLoadFromMainMenu;
    struct UberDelegate* OnPassThroughScrollLock;
    struct UberDelegate* OnGameFixedUpdate;
    struct UberDelegate* OnGameFixedUpdateLate;
    struct UberDelegate* OnGameAfterCollisions;
    struct UberDelegate* OnPlayerDeath;
    struct UberDelegate* OnMenuOpen;
    struct UberDelegate* OnMenuClose;
    struct UberDelegate* OnEquipmentWhellOpen;
    struct UberDelegate* OnEquipmentWhellClose;
    struct UberDelegate* OnGameReset;
    struct UberDelegate* OnGameResetFinished;
    struct UberDelegate* OnGameLanguageChange;
    struct UberDelegate* OnGameControlSchemeChange;
    struct UberDelegate* OnLogosFinished;
    struct UberDelegate* OnPlayGame;
    struct UberDelegate* OnGameQuit;
    struct UberDelegate* OnDemoEnd;
    struct UberDelegate* OnGameEnd;
    struct UberDelegate* OnStartMenuRace;
    struct UberDelegate* OnGameSystemsCreated;
    struct UberDelegate* OnEndOfFrame;
    struct UberDelegate* OnAfterSimulationUpdate;
};
#endif
#if !defined(IL2CPP_STRUCT_GameScheduler__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameScheduler__Fields_FWDDECL
#include <Modloader/app/structs/UberDelegate.h>
#include <Modloader/app/structs/UberDelegate_1_SceneRoot_.h>
#endif
#undef IL2CPP_STRUCT_GameScheduler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameScheduler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameScheduler__Fields_FWDDECL)
#include <Modloader/app/structs/GameScheduler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameScheduler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
