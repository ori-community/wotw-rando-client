#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneDSEventPipelineSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneDSEventPipelineSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventPipelineSettings_DEFINED)
#include <Modloader/app/structs/OneDSEventPipelineSettings__Fields.h>
#if defined(IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_OneDSEventPipelineSettings_DEFINED
struct OneDSEventPipelineSettings__Class;
struct OneDSEventPipelineSettings {
    struct OneDSEventPipelineSettings__Class* klass;
    MonitorData* monitor;
    struct OneDSEventPipelineSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneDSEventPipelineSettings_FWDDECL)
#define IL2CPP_STRUCT_OneDSEventPipelineSettings_FWDDECL
#include <Modloader/app/structs/OneDSEventPipelineSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_OneDSEventPipelineSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventPipelineSettings_DEFINED) && !defined(IL2CPP_STRUCT_OneDSEventPipelineSettings_FWDDECL)
#include <Modloader/app/structs/OneDSEventPipelineSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneDSEventPipelineSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
