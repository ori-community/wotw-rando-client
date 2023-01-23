#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HalfEdge__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HalfEdge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HalfEdge__Fields_DEFINED)
#define IL2CPP_STRUCT_HalfEdge__Fields_DEFINED
struct Vertex_1;
struct Face;
struct HalfEdge;
struct __declspec(align(8)) HalfEdge__Fields {
    int32_t id;
    int32_t mark;
    struct Vertex_1* origin;
    struct Face* face;
    struct HalfEdge* twin;
    struct HalfEdge* next;
};
#endif
#if !defined(IL2CPP_STRUCT_HalfEdge__Fields_FWDDECL)
#define IL2CPP_STRUCT_HalfEdge__Fields_FWDDECL
#include <Modloader/app/structs/Face.h>
#include <Modloader/app/structs/HalfEdge.h>
#include <Modloader/app/structs/Vertex_1.h>
#endif
#undef IL2CPP_STRUCT_HalfEdge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HalfEdge__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HalfEdge__Fields_FWDDECL)
#include <Modloader/app/structs/HalfEdge__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HalfEdge__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
