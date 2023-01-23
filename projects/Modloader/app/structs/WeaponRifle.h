#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponRifle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponRifle_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponRifle_DEFINED)
#include <Modloader/app/structs/WeaponRifle__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponRifle__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponRifle_DEFINED
struct WeaponRifle__Class;
struct WeaponRifle {
    struct WeaponRifle__Class* klass;
    MonitorData* monitor;
    struct WeaponRifle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponRifle_FWDDECL)
#define IL2CPP_STRUCT_WeaponRifle_FWDDECL
#include <Modloader/app/structs/WeaponRifle__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponRifle_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponRifle_DEFINED) && !defined(IL2CPP_STRUCT_WeaponRifle_FWDDECL)
#include <Modloader/app/structs/WeaponRifle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponRifle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
