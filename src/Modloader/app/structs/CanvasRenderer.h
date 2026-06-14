#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanvasRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanvasRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasRenderer_DEFINED)
#include <Modloader/app/structs/CanvasRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_CanvasRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_CanvasRenderer_DEFINED
struct CanvasRenderer__Class;
struct CanvasRenderer {
    struct CanvasRenderer__Class* klass;
    MonitorData* monitor;
    struct CanvasRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CanvasRenderer_FWDDECL)
#define IL2CPP_STRUCT_CanvasRenderer_FWDDECL
#include <Modloader/app/structs/CanvasRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_CanvasRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasRenderer_DEFINED) && !defined(IL2CPP_STRUCT_CanvasRenderer_FWDDECL)
#include <Modloader/app/structs/CanvasRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanvasRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
