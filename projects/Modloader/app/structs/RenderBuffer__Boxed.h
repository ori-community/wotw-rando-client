#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderBuffer__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderBuffer__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderBuffer__Boxed_DEFINED)
#include <Modloader/app/structs/RenderBuffer.h>
#if defined(IL2CPP_STRUCT_RenderBuffer_DEFINED)
#define IL2CPP_STRUCT_RenderBuffer__Boxed_DEFINED
struct RenderBuffer__Class;
struct RenderBuffer__Boxed {
    struct RenderBuffer__Class* klass;
    MonitorData* monitor;
    struct RenderBuffer fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderBuffer__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RenderBuffer__Boxed_FWDDECL
#include <Modloader/app/structs/RenderBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_RenderBuffer__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderBuffer__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RenderBuffer__Boxed_FWDDECL)
#include <Modloader/app/structs/RenderBuffer__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderBuffer__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
