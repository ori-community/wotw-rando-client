#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vertex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vertex_DEFINED)
#include <Modloader/app/structs/Vertex__Fields.h>
#if defined(IL2CPP_STRUCT_Vertex__Fields_DEFINED)
#define IL2CPP_STRUCT_Vertex_DEFINED
struct Vertex__Class;
struct Vertex {
    struct Vertex__Class* klass;
    MonitorData* monitor;
    struct Vertex__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vertex_FWDDECL)
#define IL2CPP_STRUCT_Vertex_FWDDECL
#include <Modloader/app/structs/Vertex__Class.h>
#endif
#undef IL2CPP_STRUCT_Vertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vertex_DEFINED) && !defined(IL2CPP_STRUCT_Vertex_FWDDECL)
#include <Modloader/app/structs/Vertex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vertex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
