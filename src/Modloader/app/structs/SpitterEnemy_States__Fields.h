#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemy_States__Fields_DEFINED
struct SpitterEnemyIdleState;
struct SpitterEnemyWalkState;
struct SpitterEnemyRunBackState;
struct SpitterEnemyChargingState;
struct SpitterEnemyShootingState;
struct SpitterEnemyThrownState;
struct SpitterEnemyStompedState;
struct SpitterEnemyStunnedState;
struct SpitterEnemySpiritLeashedState;
struct SpitterEnemyTrappedState;
struct __declspec(align(8)) SpitterEnemy_States__Fields {
    struct SpitterEnemyIdleState* Idle;
    struct SpitterEnemyWalkState* Walk;
    struct SpitterEnemyRunBackState* RunBack;
    struct SpitterEnemyChargingState* SpitterEnemyCharging;
    struct SpitterEnemyShootingState* Shooting;
    struct SpitterEnemyThrownState* Thrown;
    struct SpitterEnemyStompedState* Stomped;
    struct SpitterEnemyStunnedState* Stunned;
    struct SpitterEnemySpiritLeashedState* SpiritLeashed;
    struct SpitterEnemyTrappedState* Trapped;
};
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/SpitterEnemyChargingState.h>
#include <Modloader/app/structs/SpitterEnemyIdleState.h>
#include <Modloader/app/structs/SpitterEnemyRunBackState.h>
#include <Modloader/app/structs/SpitterEnemyShootingState.h>
#include <Modloader/app/structs/SpitterEnemySpiritLeashedState.h>
#include <Modloader/app/structs/SpitterEnemyStompedState.h>
#include <Modloader/app/structs/SpitterEnemyStunnedState.h>
#include <Modloader/app/structs/SpitterEnemyThrownState.h>
#include <Modloader/app/structs/SpitterEnemyTrappedState.h>
#include <Modloader/app/structs/SpitterEnemyWalkState.h>
#endif
#undef IL2CPP_STRUCT_SpitterEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/SpitterEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
