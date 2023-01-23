#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberContourMeshCustomAsset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberContourMeshCustomAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberContourMeshCustomAsset__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_UberContourMeshCustomAsset__Fields_DEFINED
struct List_1_CageStructureTool_Vertex_;
struct List_1_CageStructureTool_Edge_;
struct List_1_CageStructureTool_Face_;
struct Mesh;
struct String;
struct UberContourMeshCustomAsset__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_CageStructureTool_Vertex_* CageVertices;
    struct List_1_CageStructureTool_Edge_* CageEdges;
    struct List_1_CageStructureTool_Face_* CageFaces;
    struct Mesh* CustomMesh;
    struct String* TexGUID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberContourMeshCustomAsset__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberContourMeshCustomAsset__Fields_FWDDECL
#include <Modloader/app/structs/List_1_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Face_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UberContourMeshCustomAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberContourMeshCustomAsset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberContourMeshCustomAsset__Fields_FWDDECL)
#include <Modloader/app/structs/UberContourMeshCustomAsset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberContourMeshCustomAsset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
