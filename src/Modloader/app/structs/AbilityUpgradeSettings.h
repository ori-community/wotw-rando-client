#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbilityUpgradeSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbilityUpgradeSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilityUpgradeSettings_DEFINED)
#include <Modloader/app/structs/AbilityUpgradeSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AbilityUpgradeSettings_DEFINED
struct AbilityUpgradeSettings__Class;
struct AbilityUpgradeSettings {
    struct AbilityUpgradeSettings__Class* klass;
    MonitorData* monitor;
    struct AbilityUpgradeSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbilityUpgradeSettings_FWDDECL)
#define IL2CPP_STRUCT_AbilityUpgradeSettings_FWDDECL
#include <Modloader/app/structs/AbilityUpgradeSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AbilityUpgradeSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilityUpgradeSettings_DEFINED) && !defined(IL2CPP_STRUCT_AbilityUpgradeSettings_FWDDECL)
#include <Modloader/app/structs/AbilityUpgradeSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbilityUpgradeSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
