#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindPipeZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindPipeZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindPipeZone_DEFINED)
#include <Modloader/app/structs/WindPipeZone__Fields.h>
#if defined(IL2CPP_STRUCT_WindPipeZone__Fields_DEFINED)
#define IL2CPP_STRUCT_WindPipeZone_DEFINED
struct WindPipeZone__Class;
struct WindPipeZone {
    struct WindPipeZone__Class* klass;
    MonitorData* monitor;
    struct WindPipeZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindPipeZone_FWDDECL)
#define IL2CPP_STRUCT_WindPipeZone_FWDDECL
#include <Modloader/app/structs/WindPipeZone__Class.h>
#endif
#undef IL2CPP_STRUCT_WindPipeZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindPipeZone_DEFINED) && !defined(IL2CPP_STRUCT_WindPipeZone_FWDDECL)
#include <Modloader/app/structs/WindPipeZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindPipeZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
