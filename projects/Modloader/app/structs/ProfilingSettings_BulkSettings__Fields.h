#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_DEFINED
struct ProfilingSettings_SettingType__Enum__Array;
struct __declspec(align(8)) ProfilingSettings_BulkSettings__Fields {
    struct ProfilingSettings_SettingType__Enum__Array* SettingsToDisable;
    struct ProfilingSettings_SettingType__Enum__Array* SettingsToEnable;
};
#endif
#if !defined(IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_FWDDECL
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProfilingSettings_BulkSettings__Fields_FWDDECL)
#include <Modloader/app/structs/ProfilingSettings_BulkSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProfilingSettings_BulkSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
