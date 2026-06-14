#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponmasterScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponmasterScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponmasterScreen__Fields_DEFINED)
#include <Modloader/app/structs/ShopkeeperScreen__Fields.h>
#if defined(IL2CPP_STRUCT_ShopkeeperScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponmasterScreen__Fields_DEFINED
struct UpgradeAbilityItem__Array;
struct WeaponmasterItem__Array;
struct WeaponmasterScreen__Fields {
    struct ShopkeeperScreen__Fields _;
    struct UpgradeAbilityItem__Array* Upgrades;
    struct WeaponmasterItem__Array* WeaponmasterItems;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponmasterScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponmasterScreen__Fields_FWDDECL
#include <Modloader/app/structs/UpgradeAbilityItem__Array.h>
#include <Modloader/app/structs/WeaponmasterItem__Array.h>
#endif
#undef IL2CPP_STRUCT_WeaponmasterScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponmasterScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponmasterScreen__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponmasterScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponmasterScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
