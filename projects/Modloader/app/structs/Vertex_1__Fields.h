#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vertex_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vertex_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vertex_1__Fields_DEFINED)
#include <Modloader/app/structs/Point__Fields.h>
#if defined(IL2CPP_STRUCT_Point__Fields_DEFINED)
#define IL2CPP_STRUCT_Vertex_1__Fields_DEFINED
struct HalfEdge;
struct Vertex_1__Fields {
    struct Point__Fields _;
    struct HalfEdge* leaving;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vertex_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Vertex_1__Fields_FWDDECL
#include <Modloader/app/structs/HalfEdge.h>
#endif
#undef IL2CPP_STRUCT_Vertex_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vertex_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Vertex_1__Fields_FWDDECL)
#include <Modloader/app/structs/Vertex_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vertex_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
