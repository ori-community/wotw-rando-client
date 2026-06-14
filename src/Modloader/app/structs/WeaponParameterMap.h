#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponParameterMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponParameterMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponParameterMap_DEFINED)
#include <Modloader/app/structs/WeaponParameterMap__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponParameterMap__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponParameterMap_DEFINED
struct WeaponParameterMap__Class;
struct WeaponParameterMap {
    struct WeaponParameterMap__Class* klass;
    MonitorData* monitor;
    struct WeaponParameterMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponParameterMap_FWDDECL)
#define IL2CPP_STRUCT_WeaponParameterMap_FWDDECL
#include <Modloader/app/structs/WeaponParameterMap__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponParameterMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponParameterMap_DEFINED) && !defined(IL2CPP_STRUCT_WeaponParameterMap_FWDDECL)
#include <Modloader/app/structs/WeaponParameterMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponParameterMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
