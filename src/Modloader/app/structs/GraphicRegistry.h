#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GraphicRegistry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GraphicRegistry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicRegistry_DEFINED)
#include <Modloader/app/structs/GraphicRegistry__Fields.h>
#if defined(IL2CPP_STRUCT_GraphicRegistry__Fields_DEFINED)
#define IL2CPP_STRUCT_GraphicRegistry_DEFINED
struct GraphicRegistry__Class;
struct GraphicRegistry {
    struct GraphicRegistry__Class* klass;
    MonitorData* monitor;
    struct GraphicRegistry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GraphicRegistry_FWDDECL)
#define IL2CPP_STRUCT_GraphicRegistry_FWDDECL
#include <Modloader/app/structs/GraphicRegistry__Class.h>
#endif
#undef IL2CPP_STRUCT_GraphicRegistry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicRegistry_DEFINED) && !defined(IL2CPP_STRUCT_GraphicRegistry_FWDDECL)
#include <Modloader/app/structs/GraphicRegistry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GraphicRegistry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
