#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponBase_DEFINED)
#include <Modloader/app/structs/WeaponBase__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponBase__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponBase_DEFINED
struct WeaponBase__Class;
struct WeaponBase {
    struct WeaponBase__Class* klass;
    MonitorData* monitor;
    struct WeaponBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponBase_FWDDECL)
#define IL2CPP_STRUCT_WeaponBase_FWDDECL
#include <Modloader/app/structs/WeaponBase__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponBase_DEFINED) && !defined(IL2CPP_STRUCT_WeaponBase_FWDDECL)
#include <Modloader/app/structs/WeaponBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
