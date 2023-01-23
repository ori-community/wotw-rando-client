#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradeAbilityItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradeAbilityItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradeAbilityItem_DEFINED)
#include <Modloader/app/structs/UpgradeAbilityItem__Fields.h>
#if defined(IL2CPP_STRUCT_UpgradeAbilityItem__Fields_DEFINED)
#define IL2CPP_STRUCT_UpgradeAbilityItem_DEFINED
struct UpgradeAbilityItem__Class;
struct UpgradeAbilityItem {
    struct UpgradeAbilityItem__Class* klass;
    MonitorData* monitor;
    struct UpgradeAbilityItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradeAbilityItem_FWDDECL)
#define IL2CPP_STRUCT_UpgradeAbilityItem_FWDDECL
#include <Modloader/app/structs/UpgradeAbilityItem__Class.h>
#endif
#undef IL2CPP_STRUCT_UpgradeAbilityItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradeAbilityItem_DEFINED) && !defined(IL2CPP_STRUCT_UpgradeAbilityItem_FWDDECL)
#include <Modloader/app/structs/UpgradeAbilityItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradeAbilityItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
