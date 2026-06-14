#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageStructureTool__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageStructureTool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureTool__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CageStructureTool__Fields_DEFINED
struct List_1_ICageMetaData_;
struct Texture2D;
struct Byte__Array;
struct List_1_CageStructureTool_Vertex_;
struct List_1_CageStructureTool_Edge_;
struct List_1_CageStructureTool_Face_;
struct Action_1_CageStructureTool_Vertex_;
struct Action_1_CageStructureTool_Edge_;
struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_;
struct Action_1_CageStructureTool_Face_;
struct Action;
struct Action_3_CageStructureTool_Face_Boolean_Boolean_;
struct Action_3_CageStructureTool_Edge_Boolean_Boolean_;
struct Action_3_CageStructureTool_Vertex_Boolean_Boolean_;
struct Dictionary_2_System_Int32_System_Int32_;
struct Renderer;
struct Transform;
struct Rect__Array;
struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_;
struct List_1_UnityEngine_Vector2_;
struct CageStructureTool__Fields {
    struct MonoBehaviour__Fields _;
    int32_t VerticeUniqueID;
    int32_t EdgeUniqueID;
    int32_t FaceUniqueID;
    int32_t EditingMode;
    struct List_1_ICageMetaData_* MetaData;
    struct Texture2D* CageStructureTexture;
    struct Byte__Array* ZoneMap;
    int32_t ZoneMapWidth;
    int32_t ZoneMapHeight;
    bool UseTextureMap;
    struct List_1_CageStructureTool_Vertex_* Vertices;
    struct List_1_CageStructureTool_Edge_* Edges;
    struct List_1_CageStructureTool_Face_* Faces;
    struct Action_1_CageStructureTool_Vertex_* OnAddVertex;
    struct Action_1_CageStructureTool_Vertex_* OnRemoveVertex;
    struct Action_1_CageStructureTool_Edge_* OnAddEdge;
    struct Action_1_CageStructureTool_Edge_* OnRemoveEdge;
    struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_* OnSplitEdge;
    struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_* OnMergeEdge;
    struct Action_1_CageStructureTool_Face_* OnAddFace;
    struct Action_1_CageStructureTool_Face_* OnRemoveFace;
    struct Action* OnModified;
    struct Action_3_CageStructureTool_Face_Boolean_Boolean_* OnDisplayFace;
    struct Action_3_CageStructureTool_Edge_Boolean_Boolean_* OnDisplayEdge;
    struct Action_3_CageStructureTool_Vertex_Boolean_Boolean_* OnDisplayVertex;
    struct List_1_CageStructureTool_Vertex_* m_selectedVertices;
    struct Dictionary_2_System_Int32_System_Int32_* m_faceHashToIdMap;
    struct Renderer* m_renderer;
    bool EnableBoundsCheckOptimization;
    bool ShouldBeStrippedForBuilds;
    bool cage3D;
    bool saveMeshToAsset;
    struct Transform* m_transform;
    bool DontGenerateFaces;
    struct Rect__Array* m_faceOptimisation;
    struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_* Connections;
    bool m_localPolyValid;
    struct List_1_UnityEngine_Vector2_* m_localVertices;
    struct Bounds m_bounds;
    bool m_hasBoundsBeenCalculated;
    struct Vector3 m_boundsCenterInLocalSpace;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CageStructureTool__Fields_FWDDECL)
#define IL2CPP_STRUCT_CageStructureTool__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/Action_1_CageStructureTool_Face_.h>
#include <Modloader/app/structs/Action_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/Action_3_CageStructureTool_Edge_Boolean_Boolean_.h>
#include <Modloader/app/structs/Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/Action_3_CageStructureTool_Face_Boolean_Boolean_.h>
#include <Modloader/app/structs/Action_3_CageStructureTool_Vertex_Boolean_Boolean_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Face_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/List_1_ICageMetaData_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CageStructureTool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureTool__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CageStructureTool__Fields_FWDDECL)
#include <Modloader/app/structs/CageStructureTool__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageStructureTool__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
