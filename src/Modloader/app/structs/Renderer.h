#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Renderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Renderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Renderer_DEFINED)
#include <Modloader/app/structs/Renderer__Fields.h>
#if defined(IL2CPP_STRUCT_Renderer__Fields_DEFINED)
#define IL2CPP_STRUCT_Renderer_DEFINED
struct Renderer__Class;
struct Renderer {
    struct Renderer__Class* klass;
    MonitorData* monitor;
    struct Renderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Renderer_FWDDECL)
#define IL2CPP_STRUCT_Renderer_FWDDECL
#include <Modloader/app/structs/Renderer__Class.h>
#endif
#undef IL2CPP_STRUCT_Renderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Renderer_DEFINED) && !defined(IL2CPP_STRUCT_Renderer_FWDDECL)
#include <Modloader/app/structs/Renderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Renderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
