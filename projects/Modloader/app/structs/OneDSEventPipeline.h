#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneDSEventPipeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneDSEventPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventPipeline_DEFINED)
#include <Modloader/app/structs/OneDSEventPipeline__Fields.h>
#if defined(IL2CPP_STRUCT_OneDSEventPipeline__Fields_DEFINED)
#define IL2CPP_STRUCT_OneDSEventPipeline_DEFINED
struct OneDSEventPipeline__Class;
struct OneDSEventPipeline {
    struct OneDSEventPipeline__Class* klass;
    MonitorData* monitor;
    struct OneDSEventPipeline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneDSEventPipeline_FWDDECL)
#define IL2CPP_STRUCT_OneDSEventPipeline_FWDDECL
#include <Modloader/app/structs/OneDSEventPipeline__Class.h>
#endif
#undef IL2CPP_STRUCT_OneDSEventPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventPipeline_DEFINED) && !defined(IL2CPP_STRUCT_OneDSEventPipeline_FWDDECL)
#include <Modloader/app/structs/OneDSEventPipeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneDSEventPipeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
