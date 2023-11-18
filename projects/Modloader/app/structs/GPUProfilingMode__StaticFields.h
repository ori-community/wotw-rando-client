#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUProfilingMode__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUProfilingMode__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUProfilingMode__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GPUProfilingMode__StaticFields_DEFINED
struct ProfilingSettings_SettingType__Enum__Array;
struct GPUProfilingMode__StaticFields {
    struct ProfilingSettings_SettingType__Enum__Array* SettingsToDisable;
    struct ProfilingSettings_SettingType__Enum__Array* SettingsToEnable;
};
#endif
#if !defined(IL2CPP_STRUCT_GPUProfilingMode__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GPUProfilingMode__StaticFields_FWDDECL
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_GPUProfilingMode__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUProfilingMode__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GPUProfilingMode__StaticFields_FWDDECL)
#include <Modloader/app/structs/GPUProfilingMode__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUProfilingMode__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
