#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_StatesHolder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_StatesHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_StatesHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_StatesHolder__Fields_DEFINED
struct TentacleEnemy_IdleState;
struct TentacleEnemy_LookAtOriState;
struct TentacleEnemy_MeleeAttackState;
struct TentacleEnemy_SpitAttackState;
struct TentacleEnemy_StuckInGroundState;
struct TentacleEnemy_HoldingOriState;
struct TentacleEnemy_DyingState;
struct TentacleEnemy_StunState;
struct __declspec(align(8)) TentacleEnemy_StatesHolder__Fields {
    struct TentacleEnemy_IdleState* Idle;
    struct TentacleEnemy_LookAtOriState* LookAtOri;
    struct TentacleEnemy_MeleeAttackState* MeleeAttack;
    struct TentacleEnemy_SpitAttackState* SpitAttack;
    struct TentacleEnemy_StuckInGroundState* StuckInGround;
    struct TentacleEnemy_HoldingOriState* HoldingOri;
    struct TentacleEnemy_DyingState* Dying;
    struct TentacleEnemy_StunState* Stun;
};
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_StatesHolder__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_StatesHolder__Fields_FWDDECL
#include <Modloader/app/structs/TentacleEnemy_DyingState.h>
#include <Modloader/app/structs/TentacleEnemy_HoldingOriState.h>
#include <Modloader/app/structs/TentacleEnemy_IdleState.h>
#include <Modloader/app/structs/TentacleEnemy_LookAtOriState.h>
#include <Modloader/app/structs/TentacleEnemy_MeleeAttackState.h>
#include <Modloader/app/structs/TentacleEnemy_SpitAttackState.h>
#include <Modloader/app/structs/TentacleEnemy_StuckInGroundState.h>
#include <Modloader/app/structs/TentacleEnemy_StunState.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_StatesHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_StatesHolder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_StatesHolder__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_StatesHolder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_StatesHolder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
