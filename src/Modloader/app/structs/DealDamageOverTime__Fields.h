#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DealDamageOverTime__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DealDamageOverTime__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageOverTime__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpiritShardType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DealDamageOverTime__Fields_DEFINED
struct Transform;
struct IDamageReciever__Array;
struct DealDamageOverTime__Fields {
    struct MonoBehaviour__Fields _;
    DamageType__Enum DamageType;

    AbilityType__Enum AbilityType;

    float DamageAmount;
    DamageWeight__Enum DamageWeight;

    float DamageInterval;
    float DamageDuration;
    bool DestroyWhenAllDamageDealt;
    SpiritShardType__Enum ShardType;

    float m_remainingInterval;
    float m_remainingTime;
    struct Transform* m_transform;
    struct IDamageReciever__Array* CachedDamageReceivers;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DealDamageOverTime__Fields_FWDDECL)
#define IL2CPP_STRUCT_DealDamageOverTime__Fields_FWDDECL
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DealDamageOverTime__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageOverTime__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DealDamageOverTime__Fields_FWDDECL)
#include <Modloader/app/structs/DealDamageOverTime__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DealDamageOverTime__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
