#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineMesh__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineMesh__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineMesh__Fields_DEFINED)
#include <Modloader/app/structs/LineMesh_UVModeType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LineMesh_UVModeType__Enum_DEFINED)
#define IL2CPP_STRUCT_LineMesh__Fields_DEFINED
struct List_1_UnityEngine_Vector3_;
struct Mesh;
struct MeshFilter;
struct Vector3__Array;
struct Vector2__Array;
struct Int32__Array;
struct LineMesh__Fields {
    struct MonoBehaviour__Fields _;
    bool PreventOverlap;
    float Width;
    struct List_1_UnityEngine_Vector3_* Position;
    struct Vector3 Normal;
    LineMesh_UVModeType__Enum UVMode;

    struct Mesh* m_mesh;
    struct MeshFilter* m_meshFilter;
    struct Vector3__Array* m_vertices;
    struct Vector3__Array* m_normals;
    struct Vector2__Array* m_uvs;
    struct Int32__Array* m_triangles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineMesh__Fields_FWDDECL)
#define IL2CPP_STRUCT_LineMesh__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_LineMesh__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineMesh__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LineMesh__Fields_FWDDECL)
#include <Modloader/app/structs/LineMesh__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineMesh__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
