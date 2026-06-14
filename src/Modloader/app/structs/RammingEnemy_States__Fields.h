#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemy_States__Fields_DEFINED
struct RammingIdleState;
struct RammingAlertState;
struct RammingRunningState;
struct RammingBrakingState;
struct RammingHitWallState;
struct RammingStunnedState;
struct RammingKnockBackState;
struct RammingRetreatState;
struct __declspec(align(8)) RammingEnemy_States__Fields {
    struct RammingIdleState* Idle;
    struct RammingAlertState* Alert;
    struct RammingRunningState* Running;
    struct RammingBrakingState* Braking;
    struct RammingBrakingState* RetreatBraking;
    struct RammingHitWallState* HitWall;
    struct RammingStunnedState* Stunned;
    struct RammingKnockBackState* KnockBack;
    struct RammingRetreatState* Retreat;
};
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/RammingAlertState.h>
#include <Modloader/app/structs/RammingBrakingState.h>
#include <Modloader/app/structs/RammingHitWallState.h>
#include <Modloader/app/structs/RammingIdleState.h>
#include <Modloader/app/structs/RammingKnockBackState.h>
#include <Modloader/app/structs/RammingRetreatState.h>
#include <Modloader/app/structs/RammingRunningState.h>
#include <Modloader/app/structs/RammingStunnedState.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/RammingEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
