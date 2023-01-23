#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProfilingSettings_BulkSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProfilingSettings_BulkSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_BulkSettings_DEFINED)
#include <Modloader/app/structs/ProfilingSettings_BulkSettings__Fields.h>
#if defined(IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ProfilingSettings_BulkSettings_DEFINED
struct ProfilingSettings_BulkSettings__Class;
struct ProfilingSettings_BulkSettings {
    struct ProfilingSettings_BulkSettings__Class* klass;
    MonitorData* monitor;
    struct ProfilingSettings_BulkSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProfilingSettings_BulkSettings_FWDDECL)
#define IL2CPP_STRUCT_ProfilingSettings_BulkSettings_FWDDECL
#include <Modloader/app/structs/ProfilingSettings_BulkSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ProfilingSettings_BulkSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_BulkSettings_DEFINED) && !defined(IL2CPP_STRUCT_ProfilingSettings_BulkSettings_FWDDECL)
#include <Modloader/app/structs/ProfilingSettings_BulkSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProfilingSettings_BulkSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
