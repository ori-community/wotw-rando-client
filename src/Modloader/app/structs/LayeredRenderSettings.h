#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayeredRenderSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayeredRenderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredRenderSettings_DEFINED)
#include <Modloader/app/structs/LayeredRenderSettings__Fields.h>
#if defined(IL2CPP_STRUCT_LayeredRenderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_LayeredRenderSettings_DEFINED
struct LayeredRenderSettings__Class;
struct LayeredRenderSettings {
    struct LayeredRenderSettings__Class* klass;
    MonitorData* monitor;
    struct LayeredRenderSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayeredRenderSettings_FWDDECL)
#define IL2CPP_STRUCT_LayeredRenderSettings_FWDDECL
#include <Modloader/app/structs/LayeredRenderSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_LayeredRenderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredRenderSettings_DEFINED) && !defined(IL2CPP_STRUCT_LayeredRenderSettings_FWDDECL)
#include <Modloader/app/structs/LayeredRenderSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayeredRenderSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
