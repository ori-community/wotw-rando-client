#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryWeaponUpgradeEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryWeaponUpgradeEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryWeaponUpgradeEvent__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryWeaponUpgradeEvent__Fields_DEFINED
struct String;
struct MoonTelemetryWeaponUpgradeEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    int32_t ID;
    int32_t NewLevel;
    int32_t ExpSpent;
    struct String* _Name_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryWeaponUpgradeEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryWeaponUpgradeEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryWeaponUpgradeEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryWeaponUpgradeEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryWeaponUpgradeEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryWeaponUpgradeEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryWeaponUpgradeEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
