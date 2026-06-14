#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatingRockTurretEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatingRockTurretEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockTurretEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatingRockTurretEnemy_States__Fields_DEFINED
struct State_2;
struct __declspec(align(8)) FloatingRockTurretEnemy_States__Fields {
    struct State_2* Respawn;
    struct State_2* Idle;
    struct State_2* Charge;
    struct State_2* Laser;
    struct State_2* Shooting;
};
#endif
#if !defined(IL2CPP_STRUCT_FloatingRockTurretEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_FloatingRockTurretEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/State_2.h>
#endif
#undef IL2CPP_STRUCT_FloatingRockTurretEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockTurretEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FloatingRockTurretEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/FloatingRockTurretEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatingRockTurretEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
