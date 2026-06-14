#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_DEFINED
struct String;
struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_;
struct PerformanceDebugMenuPage__Fields {
    struct MonoBehaviour__Fields _;
    struct String* m_name;
    struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_* m_usedSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_FWDDECL)
#define IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage__Fields_FWDDECL)
#include <Modloader/app/structs/PerformanceDebugMenuPage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformanceDebugMenuPage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
