#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemy_States__Fields_DEFINED
struct RockyEnemyIdleState;
struct RockyEnemyWalkState;
struct RockyEnemyChargingState;
struct RockyEnemyShootingState;
struct RockyEnemyAnticipatingState;
struct RockyEnemyClosingState;
struct RockyEnemyClosedState;
struct RockyEnemyOpeningState;
struct RockyEnemyThrownState;
struct __declspec(align(8)) RockyEnemy_States__Fields {
    struct RockyEnemyIdleState* Idle;
    struct RockyEnemyWalkState* Walk;
    struct RockyEnemyChargingState* Charging;
    struct RockyEnemyShootingState* Shooting;
    struct RockyEnemyAnticipatingState* Anticipating;
    struct RockyEnemyClosingState* Closing;
    struct RockyEnemyClosedState* Closed;
    struct RockyEnemyOpeningState* Opening;
    struct RockyEnemyThrownState* Thrown;
};
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/RockyEnemyAnticipatingState.h>
#include <Modloader/app/structs/RockyEnemyChargingState.h>
#include <Modloader/app/structs/RockyEnemyClosedState.h>
#include <Modloader/app/structs/RockyEnemyClosingState.h>
#include <Modloader/app/structs/RockyEnemyIdleState.h>
#include <Modloader/app/structs/RockyEnemyOpeningState.h>
#include <Modloader/app/structs/RockyEnemyShootingState.h>
#include <Modloader/app/structs/RockyEnemyThrownState.h>
#include <Modloader/app/structs/RockyEnemyWalkState.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/RockyEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
