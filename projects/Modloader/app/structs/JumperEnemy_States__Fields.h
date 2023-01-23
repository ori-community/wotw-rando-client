#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_JumperEnemy_States__Fields_DEFINED
struct State_2;
struct JumperEnemyIdleState;
struct JumperEnemyChargingState;
struct JumperEnemyFallState;
struct JumperEnemyThrownState;
struct JumperEnemyStompedState;
struct JumperEnemyStunnedState;
struct __declspec(align(8)) JumperEnemy_States__Fields {
    struct State_2* Respawn;
    struct JumperEnemyIdleState* Idle;
    struct JumperEnemyChargingState* JumpCharge;
    struct JumperEnemyFallState* Fall;
    struct JumperEnemyThrownState* Thrown;
    struct JumperEnemyStompedState* Stomped;
    struct JumperEnemyStunnedState* Stunned;
};
#endif
#if !defined(IL2CPP_STRUCT_JumperEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumperEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/JumperEnemyChargingState.h>
#include <Modloader/app/structs/JumperEnemyFallState.h>
#include <Modloader/app/structs/JumperEnemyIdleState.h>
#include <Modloader/app/structs/JumperEnemyStompedState.h>
#include <Modloader/app/structs/JumperEnemyStunnedState.h>
#include <Modloader/app/structs/JumperEnemyThrownState.h>
#include <Modloader/app/structs/State_2.h>
#endif
#undef IL2CPP_STRUCT_JumperEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumperEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/JumperEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
