#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponMasterIdle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponMasterIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterIdle_DEFINED)
#include <Modloader/app/structs/WeaponMasterIdle__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponMasterIdle__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponMasterIdle_DEFINED
struct WeaponMasterIdle__Class;
struct WeaponMasterIdle {
    struct WeaponMasterIdle__Class* klass;
    MonitorData* monitor;
    struct WeaponMasterIdle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponMasterIdle_FWDDECL)
#define IL2CPP_STRUCT_WeaponMasterIdle_FWDDECL
#include <Modloader/app/structs/WeaponMasterIdle__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponMasterIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterIdle_DEFINED) && !defined(IL2CPP_STRUCT_WeaponMasterIdle_FWDDECL)
#include <Modloader/app/structs/WeaponMasterIdle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponMasterIdle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
