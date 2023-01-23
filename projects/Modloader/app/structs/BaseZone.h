#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseZone_DEFINED)
#include <Modloader/app/structs/BaseZone__Fields.h>
#if defined(IL2CPP_STRUCT_BaseZone__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseZone_DEFINED
struct BaseZone__Class;
struct BaseZone {
    struct BaseZone__Class* klass;
    MonitorData* monitor;
    struct BaseZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseZone_FWDDECL)
#define IL2CPP_STRUCT_BaseZone_FWDDECL
#include <Modloader/app/structs/BaseZone__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseZone_DEFINED) && !defined(IL2CPP_STRUCT_BaseZone_FWDDECL)
#include <Modloader/app/structs/BaseZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
