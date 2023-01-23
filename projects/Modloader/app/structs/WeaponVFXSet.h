#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponVFXSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponVFXSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponVFXSet_DEFINED)
#include <Modloader/app/structs/WeaponVFXSet__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponVFXSet__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponVFXSet_DEFINED
struct WeaponVFXSet__Class;
struct WeaponVFXSet {
    struct WeaponVFXSet__Class* klass;
    MonitorData* monitor;
    struct WeaponVFXSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponVFXSet_FWDDECL)
#define IL2CPP_STRUCT_WeaponVFXSet_FWDDECL
#include <Modloader/app/structs/WeaponVFXSet__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponVFXSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponVFXSet_DEFINED) && !defined(IL2CPP_STRUCT_WeaponVFXSet_FWDDECL)
#include <Modloader/app/structs/WeaponVFXSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponVFXSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
