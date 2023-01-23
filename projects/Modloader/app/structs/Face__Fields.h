#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Face__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Face__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Face__Fields_DEFINED)
#define IL2CPP_STRUCT_Face__Fields_DEFINED
struct Point;
struct HalfEdge;
struct __declspec(align(8)) Face__Fields {
    int32_t id;
    int32_t mark;
    struct Point* generator;
    struct HalfEdge* edge;
    bool bounded;
};
#endif
#if !defined(IL2CPP_STRUCT_Face__Fields_FWDDECL)
#define IL2CPP_STRUCT_Face__Fields_FWDDECL
#include <Modloader/app/structs/HalfEdge.h>
#include <Modloader/app/structs/Point.h>
#endif
#undef IL2CPP_STRUCT_Face__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Face__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Face__Fields_FWDDECL)
#include <Modloader/app/structs/Face__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Face__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
