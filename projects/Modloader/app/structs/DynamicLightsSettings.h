#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicLightsSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicLightsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLightsSettings_DEFINED)
#include <Modloader/app/structs/DynamicLightsSettings__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicLightsSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicLightsSettings_DEFINED
struct DynamicLightsSettings__Class;
struct DynamicLightsSettings {
    struct DynamicLightsSettings__Class* klass;
    MonitorData* monitor;
    struct DynamicLightsSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicLightsSettings_FWDDECL)
#define IL2CPP_STRUCT_DynamicLightsSettings_FWDDECL
#include <Modloader/app/structs/DynamicLightsSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicLightsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLightsSettings_DEFINED) && !defined(IL2CPP_STRUCT_DynamicLightsSettings_FWDDECL)
#include <Modloader/app/structs/DynamicLightsSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicLightsSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
