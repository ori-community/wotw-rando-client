#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Tree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Tree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Tree__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_Tree__Fields_DEFINED
struct Mesh;
struct List_1_P3D_Node_;
struct List_1_P3D_Triangle_;
struct __declspec(align(8)) P3D_Tree__Fields {
    struct Mesh* mesh;
    int32_t vertexCount;
    int32_t subMeshIndex;
    struct List_1_P3D_Node_* nodes;
    struct List_1_P3D_Triangle_* triangles;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_Tree__Fields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Tree__Fields_FWDDECL
#include <Modloader/app/structs/List_1_P3D_Node_.h>
#include <Modloader/app/structs/List_1_P3D_Triangle_.h>
#include <Modloader/app/structs/Mesh.h>
#endif
#undef IL2CPP_STRUCT_P3D_Tree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Tree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Tree__Fields_FWDDECL)
#include <Modloader/app/structs/P3D_Tree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Tree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
