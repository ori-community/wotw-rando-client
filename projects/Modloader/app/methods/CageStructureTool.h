#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/Action_1_CageStructureTool_Face_.h>
#include <Modloader/app/structs/Action_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/CageStructureTool_Edge.h>
#include <Modloader/app/structs/CageStructureTool_Face.h>
#include <Modloader/app/structs/CageStructureTool_Vertex.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/HashSet_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/ICageMetaData.h>
#include <Modloader/app/structs/IList_1_System_Int32_.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Face_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/List_1_List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CageStructureTool {
    IL2CPP_REGISTER_METHOD(0x00824770, void, add_OnAddVertex, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Vertex_* value)
    IL2CPP_REGISTER_METHOD(0x00824860, void, remove_OnAddVertex, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Vertex_* value)
    IL2CPP_REGISTER_METHOD(0x00824950, void, add_OnRemoveVertex, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Vertex_* value)
    IL2CPP_REGISTER_METHOD(0x00824A40, void, remove_OnRemoveVertex, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Vertex_* value)
    IL2CPP_REGISTER_METHOD(0x00824B30, void, add_OnAddEdge, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Edge_* value)
    IL2CPP_REGISTER_METHOD(0x00824C20, void, remove_OnAddEdge, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Edge_* value)
    IL2CPP_REGISTER_METHOD(0x00824D10, void, add_OnRemoveEdge, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Edge_* value)
    IL2CPP_REGISTER_METHOD(0x00824E00, void, remove_OnRemoveEdge, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Edge_* value)
    IL2CPP_REGISTER_METHOD(
        0x00824EF0,
        void,
        add_OnSplitEdge,
        app::CageStructureTool* this_ptr,
        app::Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x00824FE0,
        void,
        remove_OnSplitEdge,
        app::CageStructureTool* this_ptr,
        app::Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x008250D0,
        void,
        add_OnMergeEdge,
        app::CageStructureTool* this_ptr,
        app::Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x008251C0,
        void,
        remove_OnMergeEdge,
        app::CageStructureTool* this_ptr,
        app::Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_* value
    )
    IL2CPP_REGISTER_METHOD(0x008252B0, void, add_OnAddFace, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Face_* value)
    IL2CPP_REGISTER_METHOD(0x008253A0, void, remove_OnAddFace, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Face_* value)
    IL2CPP_REGISTER_METHOD(0x00825490, void, add_OnRemoveFace, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Face_* value)
    IL2CPP_REGISTER_METHOD(0x00825580, void, remove_OnRemoveFace, app::CageStructureTool* this_ptr, app::Action_1_CageStructureTool_Face_* value)
    IL2CPP_REGISTER_METHOD(0x00660430, app::List_1_CageStructureTool_Vertex_*, get_SelectedVertices, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660440, void, set_SelectedVertices, app::CageStructureTool* this_ptr, app::List_1_CageStructureTool_Vertex_* value)
    IL2CPP_REGISTER_METHOD(0x00825670, app::Transform*, get_Transform, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00825740, bool, get_HaveTextureMapData, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00825760, void, Awake, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00825860, app::CageStructureTool_Vertex*, VertexByIndex, app::CageStructureTool* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00825930, app::CageStructureTool_Vertex*, VertexByID, app::CageStructureTool* this_ptr, int32_t i_d)
    IL2CPP_REGISTER_METHOD(
        0x00825B80,
        void,
        RemoveVertex,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Vertex* vertex,
        bool send_modified,
        bool update_face
    )
    IL2CPP_REGISTER_METHOD(0x008260E0, void, DisconnectVertexFromEdges, app::CageStructureTool* this_ptr, int32_t vertex_index)
    IL2CPP_REGISTER_METHOD(0x00826550, app::CageStructureTool_Edge*, EdgeByID, app::CageStructureTool* this_ptr, int32_t i_d)
    IL2CPP_REGISTER_METHOD(
        0x008267A0,
        app::CageStructureTool_Edge*,
        AddEdge_1,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Vertex* vertex_a,
        app::CageStructureTool_Vertex* vertex_b,
        bool send_modified
    )
    IL2CPP_REGISTER_METHOD(
        0x00826810,
        app::CageStructureTool_Edge*,
        AddEdge_2,
        app::CageStructureTool* this_ptr,
        int32_t vertex_a,
        int32_t vertex_b,
        bool send_modified
    )
    IL2CPP_REGISTER_METHOD(
        0x008269E0,
        void,
        EdgeWasSplit,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Edge* edge,
        app::CageStructureTool_Edge* new_edge_a,
        app::CageStructureTool_Edge* new_edge_b
    )
    IL2CPP_REGISTER_METHOD(
        0x00826AB0,
        void,
        EdgesWereMerged,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Edge* edge_a,
        app::CageStructureTool_Edge* edge_b,
        app::CageStructureTool_Edge* new_edge
    )
    IL2CPP_REGISTER_METHOD(
        0x00826B80,
        bool,
        HasEdge,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Vertex* vertex_a,
        app::CageStructureTool_Vertex* vertex_b
    )
    IL2CPP_REGISTER_METHOD(
        0x00826D60,
        bool,
        RemoveEdge_1,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Vertex* vertex_a,
        app::CageStructureTool_Vertex* vertex_b,
        bool send_modified
    )
    IL2CPP_REGISTER_METHOD(
        0x00827020,
        void,
        RemoveEdge_2,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Edge* edge,
        bool send_modified,
        bool auto_face
    )
    IL2CPP_REGISTER_METHOD(0x00827080, void, RemoveEdgeAtIndex, app::CageStructureTool* this_ptr, int32_t edge_index, bool send_modified, bool auto_face)
    IL2CPP_REGISTER_METHOD(0x008278E0, int32_t, FindVertexIndex, app::CageStructureTool* this_ptr, app::CageStructureTool_Vertex* vertex)
    IL2CPP_REGISTER_METHOD(0x00827B40, int32_t, FindEdgeIndex, app::CageStructureTool* this_ptr, app::CageStructureTool_Edge* edge)
    IL2CPP_REGISTER_METHOD(0x00827DA0, app::CageStructureTool_Vertex*, AddVertex, app::CageStructureTool* this_ptr, app::Vector3 position, bool send_modified)
    IL2CPP_REGISTER_METHOD(
        0x00827F80,
        void,
        MergeVertex,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Vertex* vertex,
        app::CageStructureTool_Vertex* selected_vertex
    )
    IL2CPP_REGISTER_METHOD(
        0x00828320,
        void,
        AddFace,
        app::CageStructureTool* this_ptr,
        app::List_1_System_Int32_* verts,
        bool update_triangles,
        bool send_modified
    )
    IL2CPP_REGISTER_METHOD(0x00828830, bool, IsFaceIdUsed, app::CageStructureTool* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x00828920, void, RemoveFace, app::CageStructureTool* this_ptr, app::CageStructureTool_Face* face)
    IL2CPP_REGISTER_METHOD(0x00828B50, void, RemoveFaceAt, app::CageStructureTool* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00828C00, void, Register, app::CageStructureTool* this_ptr, app::ICageMetaData* cage_meta_data)
    IL2CPP_REGISTER_METHOD(0x00828CA0, void, Unregister, app::CageStructureTool* this_ptr, app::ICageMetaData* cage_meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFaceTriangulation, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00828D40, app::Rect__Array*, get_FacesAsRectangles, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00829260, app::CageStructureTool_Face*, FindFaceAtPositionFaster, app::CageStructureTool* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00829690, app::CageStructureTool_Face*, FindFaceAtPosition, app::CageStructureTool* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00829A90, app::List_1_CageStructureTool_Face_*, FindFacesAtPosition, app::CageStructureTool* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00829F70, app::CageStructureTool_Face*, FindClosestFaceToPosition, app::CageStructureTool* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x0082A400, app::Vector3, FindClosestVertexToPoint, app::CageStructureTool* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x0082A920, app::CageStructureTool_Face*, FaceByID, app::CageStructureTool* this_ptr, int32_t i_d)
    IL2CPP_REGISTER_METHOD(0x0082AB70, void, UpdateConnections, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0082B010, void, FindLoop, app::CageStructureTool* this_ptr, int32_t start, int32_t goal)
    IL2CPP_REGISTER_METHOD(
        0x0082C550,
        app::List_1_CageStructureTool_Vertex_*,
        FindVerticesFromEdges,
        app::CageStructureTool* this_ptr,
        app::List_1_CageStructureTool_Edge_* edges
    )
    IL2CPP_REGISTER_METHOD(
        0x0082C840,
        app::List_1_CageStructureTool_Edge_*,
        FindEdgesFromVertices_1,
        app::CageStructureTool* this_ptr,
        app::List_1_CageStructureTool_Vertex_* vertices
    )
    IL2CPP_REGISTER_METHOD(
        0x0082CC30,
        app::List_1_CageStructureTool_Edge_*,
        FindEdgesContainingVertex,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Vertex* vertex
    )
    IL2CPP_REGISTER_METHOD(0x0082CF00, app::CageStructureTool_Edge*, FindEdgeFromVertices, app::CageStructureTool* this_ptr, int32_t vertexa, int32_t vertexb)
    IL2CPP_REGISTER_METHOD(
        0x0082D0C0,
        app::List_1_CageStructureTool_Edge_*,
        FindEdgesFromVertices_2,
        app::CageStructureTool* this_ptr,
        app::List_1_System_Int32_* vertices
    )
    IL2CPP_REGISTER_METHOD(0x0082D4B0, void, GenerateMesh_1, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0082D710, void, GenerateMesh_2, app::Mesh* mesh, app::CageStructureTool* cage_structure_tool)
    IL2CPP_REGISTER_METHOD(0x0082EA20, void, FromMesh, app::CageStructureTool* this_ptr, app::Mesh* mesh, app::Transform* mesh_transform)
    IL2CPP_REGISTER_METHOD(0x0082EEA0, void, AppendMesh, app::CageStructureTool* this_ptr, app::Mesh* mesh, app::Transform* mesh_transform)
    IL2CPP_REGISTER_METHOD(0x0082F390, void, Simplify, app::CageStructureTool* this_ptr, float radius)
    IL2CPP_REGISTER_METHOD(0x0082FAB0, void, FindAllLoops, app::CageStructureTool* this_ptr, app::List_1_List_1_System_Int32_* loops)
    IL2CPP_REGISTER_METHOD(0x008302F0, void, AddFaceFromEdgePath, app::CageStructureTool* this_ptr, app::List_1_System_Int32_* path)
    IL2CPP_REGISTER_METHOD(0x00830B10, bool, HasDuplicateEdge, app::CageStructureTool* this_ptr, app::List_1_System_Int32_* path)
    IL2CPP_REGISTER_METHOD(0x00830D70, void, AutoFaceForEdge, app::CageStructureTool* this_ptr, app::CageStructureTool_Edge* e)
    IL2CPP_REGISTER_METHOD(0x00831290, void, AutoFace, app::CageStructureTool* this_ptr, app::CageStructureTool_Edge* e, bool wide)
    IL2CPP_REGISTER_METHOD(
        0x00831D50,
        app::CageStructureTool_Vertex*,
        SplitVertexConnection,
        app::CageStructureTool* this_ptr,
        int32_t base_vertex,
        int32_t skip_connection,
        app::Vector2 dir,
        float trace_dir
    )
    IL2CPP_REGISTER_METHOD(0x00832190, void, SplitAtEdge, app::CageStructureTool* this_ptr, app::CageStructureTool_Edge* e, bool auto_face)
    IL2CPP_REGISTER_METHOD(
        0x00832650,
        bool,
        TraceFaceInDir,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Vertex* vertex_start,
        int32_t prev_vertex,
        app::CageStructureTool_Edge* edge,
        app::List_1_System_Int32_* path,
        float trace_dir,
        float* total_angle
    )
    IL2CPP_REGISTER_METHOD(0x00832E00, void, SortPathPoints, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x008333A0,
        void,
        BuildOrderedPointsVector,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Vertex* current_vertex,
        app::HashSet_1_CageStructureTool_Vertex_** analyzed_vertices,
        app::List_1_CageStructureTool_Vertex_* ordered_points
    )
    IL2CPP_REGISTER_METHOD(0x008336C0, void, FlipPathDirection, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00833950, float, GetWalkAngle, app::Vector3 dir, app::Vector3 walk_dir)
    IL2CPP_REGISTER_METHOD(0x00833B20, void, Clear, app::CageStructureTool* this_ptr, bool send_modified)
    IL2CPP_REGISTER_METHOD(0x00833C70, void, GenerateSequentialVertices, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00834440, void, DebugDrawPoly, app::CageStructureTool* this_ptr, app::Color color)
    IL2CPP_REGISTER_METHOD(0x00834790, float, CalculatePolySDF, app::CageStructureTool* this_ptr, app::Vector3 circle_center_local, float circle_radius)
    IL2CPP_REGISTER_METHOD(
        0x00834BE0,
        bool,
        IsCircleOverlappingPolygon,
        app::CageStructureTool* this_ptr,
        app::Vector3 circle_center_local,
        float circle_radius
    )
    IL2CPP_REGISTER_METHOD(0x00834D20, bool, IsCircleOverlapping, app::CageStructureTool* this_ptr, app::Vector3 circle_center_world, float circle_radius)
    IL2CPP_REGISTER_METHOD(
        0x008354E0,
        bool,
        IsCircleOverlappingTriangles,
        app::CageStructureTool* this_ptr,
        app::Vector3 circle_center_local,
        float circle_radius
    )
    IL2CPP_REGISTER_METHOD(0x00835C80, bool, IsPointInside, app::CageStructureTool* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x008362B0, uint8_t, GetMapValue, app::CageStructureTool* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x00836300, void, SetMapValue, app::CageStructureTool* this_ptr, int32_t x, int32_t y, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x00836340, app::Vector3, CalculateCenterOfMass, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008365F0, app::List_1_List_1_System_Int32_*, FindAllBorderLoops, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00837160, void, RemoveDuplicateEdges, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00837330, app::List_1_CageStructureTool_Edge_*, FindBorderEdges, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x008375C0,
        bool,
        DoesEdgeBelongToFace,
        app::CageStructureTool* this_ptr,
        app::CageStructureTool_Edge* edge,
        app::CageStructureTool_Face* face
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, MarkDirty, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008378C0, bool, DoStrip, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00837CF0, void, OnBeforeStrip, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00837EB0, app::Bounds, get_Bounds, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00837FF0, void, RefreshBounds, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00838240, app::Bounds, CalculateBoundsFromFaces, app::CageStructureTool* this_ptr, app::List_1_CageStructureTool_Face_* faces)
    IL2CPP_REGISTER_METHOD(0x008383B0, app::Bounds, CalculateBoundsFromFace, app::CageStructureTool* this_ptr, app::CageStructureTool_Face* face)
    IL2CPP_REGISTER_METHOD(0x008389C0, int32_t, GetHashForVerticeList, app::List_1_System_Int32_* verts)
    IL2CPP_REGISTER_METHOD(0x00838B90, void, ctor, app::CageStructureTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02654810, int32_t, GetSequenceHashCode_1, app::IList_1_System_Object_* sequence)
    IL2CPP_REGISTER_METHOD(0x02654810, int32_t, GetSequenceHashCode_2, app::IList_1_System_Int32_* sequence)
} // namespace app::classes::CageStructureTool
