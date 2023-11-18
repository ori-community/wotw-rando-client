#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanvasUpdateRegistry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanvasUpdateRegistry_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasUpdateRegistry_DEFINED)
#include <Modloader/app/structs/CanvasUpdateRegistry__Fields.h>
#if defined(IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_DEFINED)
#define IL2CPP_STRUCT_CanvasUpdateRegistry_DEFINED
struct CanvasUpdateRegistry__Class;
struct CanvasUpdateRegistry {
    struct CanvasUpdateRegistry__Class* klass;
    MonitorData* monitor;
    struct CanvasUpdateRegistry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CanvasUpdateRegistry_FWDDECL)
#define IL2CPP_STRUCT_CanvasUpdateRegistry_FWDDECL
#include <Modloader/app/structs/CanvasUpdateRegistry__Class.h>
#endif
#undef IL2CPP_STRUCT_CanvasUpdateRegistry_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasUpdateRegistry_DEFINED) && !defined(IL2CPP_STRUCT_CanvasUpdateRegistry_FWDDECL)
#include <Modloader/app/structs/CanvasUpdateRegistry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanvasUpdateRegistry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
