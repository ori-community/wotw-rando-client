#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponmasterItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponmasterItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponmasterItem_DEFINED)
#include <Modloader/app/structs/WeaponmasterItem__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponmasterItem__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponmasterItem_DEFINED
struct WeaponmasterItem__Class;
struct WeaponmasterItem {
    struct WeaponmasterItem__Class* klass;
    MonitorData* monitor;
    struct WeaponmasterItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponmasterItem_FWDDECL)
#define IL2CPP_STRUCT_WeaponmasterItem_FWDDECL
#include <Modloader/app/structs/WeaponmasterItem__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponmasterItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponmasterItem_DEFINED) && !defined(IL2CPP_STRUCT_WeaponmasterItem_FWDDECL)
#include <Modloader/app/structs/WeaponmasterItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponmasterItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
