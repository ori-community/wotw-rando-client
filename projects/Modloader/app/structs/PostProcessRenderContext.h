#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostProcessRenderContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostProcessRenderContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostProcessRenderContext_DEFINED)
#include <Modloader/app/structs/PostProcessRenderContext__Fields.h>
#if defined(IL2CPP_STRUCT_PostProcessRenderContext__Fields_DEFINED)
#define IL2CPP_STRUCT_PostProcessRenderContext_DEFINED
struct PostProcessRenderContext__Class;
struct PostProcessRenderContext {
    struct PostProcessRenderContext__Class* klass;
    MonitorData* monitor;
    struct PostProcessRenderContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PostProcessRenderContext_FWDDECL)
#define IL2CPP_STRUCT_PostProcessRenderContext_FWDDECL
#include <Modloader/app/structs/PostProcessRenderContext__Class.h>
#endif
#undef IL2CPP_STRUCT_PostProcessRenderContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostProcessRenderContext_DEFINED) && !defined(IL2CPP_STRUCT_PostProcessRenderContext_FWDDECL)
#include <Modloader/app/structs/PostProcessRenderContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostProcessRenderContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
