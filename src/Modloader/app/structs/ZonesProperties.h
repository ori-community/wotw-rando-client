#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZonesProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZonesProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZonesProperties_DEFINED)
#include <Modloader/app/structs/ZonesProperties__Fields.h>
#if defined(IL2CPP_STRUCT_ZonesProperties__Fields_DEFINED)
#define IL2CPP_STRUCT_ZonesProperties_DEFINED
struct ZonesProperties__Class;
struct ZonesProperties {
    struct ZonesProperties__Class* klass;
    MonitorData* monitor;
    struct ZonesProperties__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZonesProperties_FWDDECL)
#define IL2CPP_STRUCT_ZonesProperties_FWDDECL
#include <Modloader/app/structs/ZonesProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_ZonesProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZonesProperties_DEFINED) && !defined(IL2CPP_STRUCT_ZonesProperties_FWDDECL)
#include <Modloader/app/structs/ZonesProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZonesProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
