#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GraphicsExt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GraphicsExt_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsExt_DEFINED)
#define IL2CPP_STRUCT_GraphicsExt_DEFINED
struct GraphicsExt__Class;
struct GraphicsExt {
    struct GraphicsExt__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GraphicsExt_FWDDECL)
#define IL2CPP_STRUCT_GraphicsExt_FWDDECL
#include <Modloader/app/structs/GraphicsExt__Class.h>
#endif
#undef IL2CPP_STRUCT_GraphicsExt_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsExt_DEFINED) && !defined(IL2CPP_STRUCT_GraphicsExt_FWDDECL)
#include <Modloader/app/structs/GraphicsExt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GraphicsExt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
