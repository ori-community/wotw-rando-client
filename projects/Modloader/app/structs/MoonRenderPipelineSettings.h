#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineSettings_DEFINED)
#include <Modloader/app/structs/MoonRenderPipelineSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MoonRenderPipelineSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineSettings_DEFINED
struct MoonRenderPipelineSettings__Class;
struct MoonRenderPipelineSettings {
    struct MoonRenderPipelineSettings__Class* klass;
    MonitorData* monitor;
    struct MoonRenderPipelineSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineSettings_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineSettings_FWDDECL
#include <Modloader/app/structs/MoonRenderPipelineSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineSettings_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineSettings_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
