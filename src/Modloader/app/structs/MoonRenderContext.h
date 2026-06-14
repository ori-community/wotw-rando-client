#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderContext_DEFINED)
#include <Modloader/app/structs/MoonRenderContext__Fields.h>
#if defined(IL2CPP_STRUCT_MoonRenderContext__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonRenderContext_DEFINED
struct MoonRenderContext__Class;
struct MoonRenderContext {
    struct MoonRenderContext__Class* klass;
    MonitorData* monitor;
    struct MoonRenderContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderContext_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderContext_FWDDECL
#include <Modloader/app/structs/MoonRenderContext__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderContext_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderContext_FWDDECL)
#include <Modloader/app/structs/MoonRenderContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
