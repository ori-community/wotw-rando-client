#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeFlameAbility_ChargeFlameDefinitions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeFlameAbility_ChargeFlameDefinitions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeFlameAbility_ChargeFlameDefinitions__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinChargeFlameAbility_ChargeFlameDefinitions__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) SeinChargeFlameAbility_ChargeFlameDefinitions__Fields {
    float ChargeDuration;
    struct GameObject* ChargeFlameBurstA;
    struct GameObject* ChargeFlameBurstB;
    struct GameObject* ChargeFlameBurstC;
    struct GameObject* ChargeFlameChargeEffectPrefab;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeFlameAbility_ChargeFlameDefinitions__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeFlameAbility_ChargeFlameDefinitions__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SeinChargeFlameAbility_ChargeFlameDefinitions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeFlameAbility_ChargeFlameDefinitions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeFlameAbility_ChargeFlameDefinitions__Fields_FWDDECL)
#include <Modloader/app/structs/SeinChargeFlameAbility_ChargeFlameDefinitions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeFlameAbility_ChargeFlameDefinitions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
