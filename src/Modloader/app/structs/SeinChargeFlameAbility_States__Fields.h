#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeFlameAbility_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeFlameAbility_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeFlameAbility_States__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinChargeFlameAbility_States__Fields_DEFINED
struct State_2;
struct __declspec(align(8)) SeinChargeFlameAbility_States__Fields {
    struct State_2* Start;
    struct State_2* Precharging;
    struct State_2* Charging;
    struct State_2* Charged;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeFlameAbility_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeFlameAbility_States__Fields_FWDDECL
#include <Modloader/app/structs/State_2.h>
#endif
#undef IL2CPP_STRUCT_SeinChargeFlameAbility_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeFlameAbility_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeFlameAbility_States__Fields_FWDDECL)
#include <Modloader/app/structs/SeinChargeFlameAbility_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeFlameAbility_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
