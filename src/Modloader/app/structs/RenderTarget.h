#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTarget_DEFINED)
#include <Modloader/app/structs/RenderTarget__Fields.h>
#if defined(IL2CPP_STRUCT_RenderTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_RenderTarget_DEFINED
struct RenderTarget__Class;
struct RenderTarget {
    struct RenderTarget__Class* klass;
    MonitorData* monitor;
    struct RenderTarget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderTarget_FWDDECL)
#define IL2CPP_STRUCT_RenderTarget_FWDDECL
#include <Modloader/app/structs/RenderTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_RenderTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTarget_DEFINED) && !defined(IL2CPP_STRUCT_RenderTarget_FWDDECL)
#include <Modloader/app/structs/RenderTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
