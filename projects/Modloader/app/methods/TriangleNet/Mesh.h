#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Configuration_1.h>
#include <Modloader/app/structs/ICollection_1_TriangleNet_Geometry_Vertex_.h>
#include <Modloader/app/structs/ICollection_1_TriangleNet_Topology_SubSegment_.h>
#include <Modloader/app/structs/ICollection_1_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_Edge_.h>
#include <Modloader/app/structs/IList_1_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/IList_1_TriangleNet_Geometry_Vertex_.h>
#include <Modloader/app/structs/InsertVertexResult__Enum.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/NodeNumbering__Enum.h>
#include <Modloader/app/structs/Osub.h>
#include <Modloader/app/structs/Otri.h>
#include <Modloader/app/structs/QualityMesher.h>
#include <Modloader/app/structs/QualityOptions.h>
#include <Modloader/app/structs/Rectangle.h>
#include <Modloader/app/structs/SubSegment.h>
#include <Modloader/app/structs/Triangle.h>
#include <Modloader/app/structs/Vertex.h>

namespace app::classes::TriangleNet::Mesh {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Rectangle*, get_Bounds, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262A230, app::ICollection_1_TriangleNet_Geometry_Vertex_*, get_Vertices, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IList_1_TriangleNet_Geometry_Point_*, get_Holes, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ICollection_1_TriangleNet_Topology_Triangle_*, get_Triangles, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262A2C0, app::ICollection_1_TriangleNet_Topology_SubSegment_*, get_Segments, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262A350, app::IEnumerable_1_TriangleNet_Geometry_Edge_*, get_Edges, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_NumberOfInputPoints, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262A4E0, int32_t, get_NumberOfEdges, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262A520, bool, get_IsPolygon, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073EDA0, app::NodeNumbering__Enum, get_CurrentNumbering, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262A530, void, Initialize, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262A9D0, void, ctor, app::Mesh_1* this_ptr, app::Configuration_1* config)
    IL2CPP_REGISTER_METHOD(0x0262B100, void, Refine, app::Mesh_1* this_ptr, app::QualityOptions* quality, bool delaunay)
    IL2CPP_REGISTER_METHOD(0x0262B3E0, void, Renumber_1, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262B3F0, void, Renumber_2, app::Mesh_1* this_ptr, app::NodeNumbering__Enum num)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, SetQualityMesher, app::Mesh_1* this_ptr, app::QualityMesher* qmesher)
    IL2CPP_REGISTER_METHOD(0x0262B9A0, void, CopyTo, app::Mesh_1* this_ptr, app::Mesh_1* target)
    IL2CPP_REGISTER_METHOD(0x0262BA10, void, ResetData, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262BBC0, void, Reset, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262BD00, void, TransferNodes, app::Mesh_1* this_ptr, app::IList_1_TriangleNet_Geometry_Vertex_* points)
    IL2CPP_REGISTER_METHOD(0x0262C0F0, void, MakeVertexMap, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0262C260, void, MakeTriangle, app::Mesh_1* this_ptr, app::Otri* newotri)
    IL2CPP_REGISTER_METHOD(0x0262C400, void, MakeSegment, app::Mesh_1* this_ptr, app::Osub* newsubseg)
    IL2CPP_REGISTER_METHOD(
        0x0262C6A0,
        app::InsertVertexResult__Enum,
        InsertVertex,
        app::Mesh_1* this_ptr,
        app::Vertex* newvertex,
        app::Otri* searchtri,
        app::Osub* splitseg,
        bool segmentflaws,
        bool triflaws
    )
    IL2CPP_REGISTER_METHOD(0x0262D8E0, void, InsertSubseg, app::Mesh_1* this_ptr, app::Otri* tri, int32_t subsegmark)
    IL2CPP_REGISTER_METHOD(0x0262DD80, void, Flip, app::Mesh_1* this_ptr, app::Otri* flipedge)
    IL2CPP_REGISTER_METHOD(0x0262E7E0, void, Unflip, app::Mesh_1* this_ptr, app::Otri* flipedge)
    IL2CPP_REGISTER_METHOD(
        0x0262F250,
        void,
        TriangulatePolygon,
        app::Mesh_1* this_ptr,
        app::Otri firstedge,
        app::Otri lastedge,
        int32_t edgecount,
        bool doflip,
        bool triflaws
    )
    IL2CPP_REGISTER_METHOD(0x0262F720, void, DeleteVertex, app::Mesh_1* this_ptr, app::Otri* deltri)
    IL2CPP_REGISTER_METHOD(0x0262FCA0, void, UndoVertex, app::Mesh_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026307A0, void, TriangleDealloc, app::Mesh_1* this_ptr, app::Triangle* dyingtriangle)
    IL2CPP_REGISTER_METHOD(0x02630940, void, VertexDealloc, app::Mesh_1* this_ptr, app::Vertex* dyingvertex)
    IL2CPP_REGISTER_METHOD(0x026309F0, void, SubsegDealloc, app::Mesh_1* this_ptr, app::SubSegment* dyingsubseg)
} // namespace app::classes::TriangleNet::Mesh
