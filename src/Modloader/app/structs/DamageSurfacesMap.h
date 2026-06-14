#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageSurfacesMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageSurfacesMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageSurfacesMap_DEFINED)
#include <Modloader/app/structs/DamageSurfacesMap__Fields.h>
#if defined(IL2CPP_STRUCT_DamageSurfacesMap__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageSurfacesMap_DEFINED
struct DamageSurfacesMap__Class;
struct DamageSurfacesMap {
    struct DamageSurfacesMap__Class* klass;
    MonitorData* monitor;
    struct DamageSurfacesMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageSurfacesMap_FWDDECL)
#define IL2CPP_STRUCT_DamageSurfacesMap_FWDDECL
#include <Modloader/app/structs/DamageSurfacesMap__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageSurfacesMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageSurfacesMap_DEFINED) && !defined(IL2CPP_STRUCT_DamageSurfacesMap_FWDDECL)
#include <Modloader/app/structs/DamageSurfacesMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageSurfacesMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
