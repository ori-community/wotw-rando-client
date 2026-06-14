#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HalfEdge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HalfEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_HalfEdge_DEFINED)
#include <Modloader/app/structs/HalfEdge__Fields.h>
#if defined(IL2CPP_STRUCT_HalfEdge__Fields_DEFINED)
#define IL2CPP_STRUCT_HalfEdge_DEFINED
struct HalfEdge__Class;
struct HalfEdge {
    struct HalfEdge__Class* klass;
    MonitorData* monitor;
    struct HalfEdge__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HalfEdge_FWDDECL)
#define IL2CPP_STRUCT_HalfEdge_FWDDECL
#include <Modloader/app/structs/HalfEdge__Class.h>
#endif
#undef IL2CPP_STRUCT_HalfEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_HalfEdge_DEFINED) && !defined(IL2CPP_STRUCT_HalfEdge_FWDDECL)
#include <Modloader/app/structs/HalfEdge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HalfEdge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
