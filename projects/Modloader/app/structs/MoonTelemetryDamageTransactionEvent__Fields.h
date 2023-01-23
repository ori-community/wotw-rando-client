#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Fields.h>
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent_DamageEntity__Enum.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent__Fields_DEFINED
struct String;
struct MoonTelemetryDamageTransactionEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    int32_t ID;
    int32_t AbilityType;
    int32_t DamageType;
    float DamageValue;
    MoonTelemetryDamageTransactionEvent_DamageEntity__Enum DamageSource;

    struct String* DamageSourceID;
    MoonTelemetryDamageTransactionEvent_DamageEntity__Enum DamageTarget;

    struct String* DamageTargetID;
    float OtherXLocation;
    float OtherYLocation;
    float ForceX;
    float ForceY;
    int32_t Weight;
    float StunDuration;
    bool TargetDestroyed;
    struct String* _Name_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryDamageTransactionEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
