#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestBoneUpdater__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestBoneUpdater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestBoneUpdater__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TestBoneUpdater__Fields_DEFINED
struct MeshFilter;
struct Mesh;
struct MeshRenderer;
struct Material;
struct List_1_UnityEngine_Transform_;
struct List_1_UnityEngine_Vector4_;
struct TestBoneUpdater__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshFilter* meshFilter;
    struct Mesh* mesh;
    struct MeshRenderer* meshRenderer;
    struct Material* skinMaterial;
    struct List_1_UnityEngine_Transform_* bones;
    struct List_1_UnityEngine_Vector4_* bonePositions;
    struct List_1_UnityEngine_Vector4_* boneInitialPositions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestBoneUpdater__Fields_FWDDECL)
#define IL2CPP_STRUCT_TestBoneUpdater__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/MeshRenderer.h>
#endif
#undef IL2CPP_STRUCT_TestBoneUpdater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestBoneUpdater__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TestBoneUpdater__Fields_FWDDECL)
#include <Modloader/app/structs/TestBoneUpdater__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestBoneUpdater__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
