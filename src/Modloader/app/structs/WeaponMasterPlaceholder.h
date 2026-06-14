#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponMasterPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponMasterPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterPlaceholder_DEFINED)
#include <Modloader/app/structs/WeaponMasterPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponMasterPlaceholder_DEFINED
struct WeaponMasterPlaceholder__Class;
struct WeaponMasterPlaceholder {
    struct WeaponMasterPlaceholder__Class* klass;
    MonitorData* monitor;
    struct WeaponMasterPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponMasterPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_WeaponMasterPlaceholder_FWDDECL
#include <Modloader/app/structs/WeaponMasterPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponMasterPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_WeaponMasterPlaceholder_FWDDECL)
#include <Modloader/app/structs/WeaponMasterPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponMasterPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
