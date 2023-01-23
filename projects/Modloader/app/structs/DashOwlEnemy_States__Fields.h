#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlEnemy_States__Fields_DEFINED
struct DashOwlIdleState;
struct DashOwlFlyHomeState;
struct DashOwlBashedState;
struct DashOwlBounceState;
struct DashOwlDashState;
struct DashOwlDashAlertState;
struct DashOwlHurtState;
struct DashOwlSpiritLeashedState;
struct __declspec(align(8)) DashOwlEnemy_States__Fields {
    struct DashOwlIdleState* Idle;
    struct DashOwlFlyHomeState* FlyHome;
    struct DashOwlBashedState* Bashed;
    struct DashOwlBounceState* Bounce;
    struct DashOwlDashState* Dash;
    struct DashOwlDashAlertState* DashAlert;
    struct DashOwlHurtState* Hurt;
    struct DashOwlSpiritLeashedState* SpiritLeashed;
};
#endif
#if !defined(IL2CPP_STRUCT_DashOwlEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashOwlEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/DashOwlBashedState.h>
#include <Modloader/app/structs/DashOwlBounceState.h>
#include <Modloader/app/structs/DashOwlDashAlertState.h>
#include <Modloader/app/structs/DashOwlDashState.h>
#include <Modloader/app/structs/DashOwlFlyHomeState.h>
#include <Modloader/app/structs/DashOwlHurtState.h>
#include <Modloader/app/structs/DashOwlIdleState.h>
#include <Modloader/app/structs/DashOwlSpiritLeashedState.h>
#endif
#undef IL2CPP_STRUCT_DashOwlEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/DashOwlEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
