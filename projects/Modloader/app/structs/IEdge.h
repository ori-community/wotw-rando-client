#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEdge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEdge_DEFINED)
#define IL2CPP_STRUCT_IEdge_DEFINED
struct IEdge__Class;
struct IEdge {
    struct IEdge__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEdge_FWDDECL)
#define IL2CPP_STRUCT_IEdge_FWDDECL
#include <Modloader/app/structs/IEdge__Class.h>
#endif
#undef IL2CPP_STRUCT_IEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEdge_DEFINED) && !defined(IL2CPP_STRUCT_IEdge_FWDDECL)
#include <Modloader/app/structs/IEdge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEdge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
