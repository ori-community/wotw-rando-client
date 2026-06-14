#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugEnemy_States__Fields_DEFINED
struct State_2;
struct DropSlugIdleState;
struct DropSlugAlertState;
struct DropSlugFallState;
struct DropSlugLandState;
struct DropSlugThrownState;
struct __declspec(align(8)) DropSlugEnemy_States__Fields {
    struct State_2* Respawn;
    struct DropSlugIdleState* Idle;
    struct DropSlugAlertState* Alert;
    struct DropSlugFallState* Fall;
    struct DropSlugLandState* Land;
    struct DropSlugThrownState* Thrown;
};
#endif
#if !defined(IL2CPP_STRUCT_DropSlugEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/DropSlugAlertState.h>
#include <Modloader/app/structs/DropSlugFallState.h>
#include <Modloader/app/structs/DropSlugIdleState.h>
#include <Modloader/app/structs/DropSlugLandState.h>
#include <Modloader/app/structs/DropSlugThrownState.h>
#include <Modloader/app/structs/State_2.h>
#endif
#undef IL2CPP_STRUCT_DropSlugEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
