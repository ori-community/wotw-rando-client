#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_FishEnemy_States__Fields_DEFINED
struct FishIdleState;
struct FishSwimState;
struct FishAttackState;
struct FishBashedState;
struct FishBounceState;
struct FishFlopState;
struct FishFallState;
struct __declspec(align(8)) FishEnemy_States__Fields {
    struct FishIdleState* Idle;
    struct FishSwimState* Swim;
    struct FishAttackState* Attack;
    struct FishBashedState* Bashed;
    struct FishBounceState* Bounce;
    struct FishFlopState* Flop;
    struct FishFallState* Fall;
};
#endif
#if !defined(IL2CPP_STRUCT_FishEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_FishEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/FishAttackState.h>
#include <Modloader/app/structs/FishBashedState.h>
#include <Modloader/app/structs/FishBounceState.h>
#include <Modloader/app/structs/FishFallState.h>
#include <Modloader/app/structs/FishFlopState.h>
#include <Modloader/app/structs/FishIdleState.h>
#include <Modloader/app/structs/FishSwimState.h>
#endif
#undef IL2CPP_STRUCT_FishEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FishEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/FishEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
