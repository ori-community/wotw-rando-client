#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponmasterItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponmasterItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponmasterItem__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponmasterItem__Fields_DEFINED
struct UpgradeAbilityItem;
struct __declspec(align(8)) WeaponmasterItem__Fields {
    struct UpgradeAbilityItem* Upgrade;
};
#endif
#if !defined(IL2CPP_STRUCT_WeaponmasterItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponmasterItem__Fields_FWDDECL
#include <Modloader/app/structs/UpgradeAbilityItem.h>
#endif
#undef IL2CPP_STRUCT_WeaponmasterItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponmasterItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponmasterItem__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponmasterItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponmasterItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
