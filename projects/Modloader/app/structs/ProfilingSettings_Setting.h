#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProfilingSettings_Setting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProfilingSettings_Setting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_Setting_DEFINED)
#include <Modloader/app/structs/ProfilingSettings_Setting__Fields.h>
#if defined(IL2CPP_STRUCT_ProfilingSettings_Setting__Fields_DEFINED)
#define IL2CPP_STRUCT_ProfilingSettings_Setting_DEFINED
struct ProfilingSettings_Setting__Class;
struct ProfilingSettings_Setting {
    struct ProfilingSettings_Setting__Class* klass;
    MonitorData* monitor;
    struct ProfilingSettings_Setting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProfilingSettings_Setting_FWDDECL)
#define IL2CPP_STRUCT_ProfilingSettings_Setting_FWDDECL
#include <Modloader/app/structs/ProfilingSettings_Setting__Class.h>
#endif
#undef IL2CPP_STRUCT_ProfilingSettings_Setting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_Setting_DEFINED) && !defined(IL2CPP_STRUCT_ProfilingSettings_Setting_FWDDECL)
#include <Modloader/app/structs/ProfilingSettings_Setting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProfilingSettings_Setting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
