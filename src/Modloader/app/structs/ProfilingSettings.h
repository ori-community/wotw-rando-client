#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProfilingSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProfilingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_DEFINED)
#define IL2CPP_STRUCT_ProfilingSettings_DEFINED
struct ProfilingSettings__Class;
struct ProfilingSettings {
    struct ProfilingSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ProfilingSettings_FWDDECL)
#define IL2CPP_STRUCT_ProfilingSettings_FWDDECL
#include <Modloader/app/structs/ProfilingSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ProfilingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_DEFINED) && !defined(IL2CPP_STRUCT_ProfilingSettings_FWDDECL)
#include <Modloader/app/structs/ProfilingSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProfilingSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
