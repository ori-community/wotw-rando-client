#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponMasterEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponMasterEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterEntity_DEFINED)
#include <Modloader/app/structs/WeaponMasterEntity__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponMasterEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponMasterEntity_DEFINED
struct WeaponMasterEntity__Class;
struct WeaponMasterEntity {
    struct WeaponMasterEntity__Class* klass;
    MonitorData* monitor;
    struct WeaponMasterEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponMasterEntity_FWDDECL)
#define IL2CPP_STRUCT_WeaponMasterEntity_FWDDECL
#include <Modloader/app/structs/WeaponMasterEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponMasterEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterEntity_DEFINED) && !defined(IL2CPP_STRUCT_WeaponMasterEntity_FWDDECL)
#include <Modloader/app/structs/WeaponMasterEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponMasterEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
