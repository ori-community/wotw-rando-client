#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEventPipeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEventPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEventPipeline_DEFINED)
#define IL2CPP_STRUCT_IEventPipeline_DEFINED
struct IEventPipeline__Class;
struct IEventPipeline {
    struct IEventPipeline__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEventPipeline_FWDDECL)
#define IL2CPP_STRUCT_IEventPipeline_FWDDECL
#include <Modloader/app/structs/IEventPipeline__Class.h>
#endif
#undef IL2CPP_STRUCT_IEventPipeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEventPipeline_DEFINED) && !defined(IL2CPP_STRUCT_IEventPipeline_FWDDECL)
#include <Modloader/app/structs/IEventPipeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEventPipeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
