#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Contour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Contour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Contour__Fields_DEFINED)
#define IL2CPP_STRUCT_Contour__Fields_DEFINED
struct List_1_TriangleNet_Geometry_Vertex_;
struct __declspec(align(8)) Contour__Fields {
    int32_t marker;
    bool convex;
    struct List_1_TriangleNet_Geometry_Vertex_* _Points_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Contour__Fields_FWDDECL)
#define IL2CPP_STRUCT_Contour__Fields_FWDDECL
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_Vertex_.h>
#endif
#undef IL2CPP_STRUCT_Contour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Contour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Contour__Fields_FWDDECL)
#include <Modloader/app/structs/Contour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Contour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
