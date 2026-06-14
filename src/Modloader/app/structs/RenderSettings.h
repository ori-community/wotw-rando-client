#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderSettings_DEFINED)
#include <Modloader/app/structs/RenderSettings__Fields.h>
#if defined(IL2CPP_STRUCT_RenderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RenderSettings_DEFINED
struct RenderSettings__Class;
struct RenderSettings {
    struct RenderSettings__Class* klass;
    MonitorData* monitor;
    struct RenderSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderSettings_FWDDECL)
#define IL2CPP_STRUCT_RenderSettings_FWDDECL
#include <Modloader/app/structs/RenderSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_RenderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderSettings_DEFINED) && !defined(IL2CPP_STRUCT_RenderSettings_FWDDECL)
#include <Modloader/app/structs/RenderSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
