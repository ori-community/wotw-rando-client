#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/IRuntimeDynamicDataLink.h>
#include <Il2CppModLoader/app/types/IMoonTypeResolver.h>
#include <Il2CppModLoader/app/types/MoonInt.h>
#include <Il2CppModLoader/app/types/MoonVector3.h>
#include <Il2CppModLoader/app/types/DynamicDataExportAttribute.h>
#include <Il2CppModLoader/app/types/DynamicDataExportClassAttribute.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass8_0.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass9_0.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass9_1.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass9_2.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass10_0.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass11_0.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass12_0.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass13_0.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass17_0.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils_c_DisplayClass18_0.h>
#include <Il2CppModLoader/app/types/DynamicDataResolver_IntEqualityComparer.h>
#include <Il2CppModLoader/app/types/MoonBool.h>
#include <Il2CppModLoader/app/types/MoonColor.h>
#include <Il2CppModLoader/app/types/MoonFloat.h>
#include <Il2CppModLoader/app/types/MoonQuaternion.h>
#include <Il2CppModLoader/app/types/Behavior.h>
#include <Il2CppModLoader/app/types/ITriangle.h>
#include <Il2CppModLoader/app/types/Configuration_1.h>
#include <Il2CppModLoader/app/types/IPredicates.h>
#include <Il2CppModLoader/app/types/TrianglePool.h>
#include <Il2CppModLoader/app/types/Triangle.h>
#include <Il2CppModLoader/app/types/Otri.h>
#include <Il2CppModLoader/app/types/Otri__Array.h>
#include <Il2CppModLoader/app/types/Point.h>
#include <Il2CppModLoader/app/types/Vertex.h>
#include <Il2CppModLoader/app/types/Vertex__Array.h>
#include <Il2CppModLoader/app/types/SubSegment.h>
#include <Il2CppModLoader/app/types/Osub__Array.h>
#include <Il2CppModLoader/app/types/ISegment.h>
#include <Il2CppModLoader/app/types/Triangle__Array.h>
#include <Il2CppModLoader/app/types/Triangle__Array__Array.h>
#include <Il2CppModLoader/app/types/Configuration_c.h>
#include <Il2CppModLoader/app/types/Log.h>
#include <Il2CppModLoader/app/types/LogItem.h>
#include <Il2CppModLoader/app/types/Mesh_1.h>
#include <Il2CppModLoader/app/types/QualityMesher.h>
#include <Il2CppModLoader/app/types/BadSubseg.h>
#include <Il2CppModLoader/app/types/BadTriQueue.h>
#include <Il2CppModLoader/app/types/BadTriangle.h>
#include <Il2CppModLoader/app/types/BadTriangle__Array.h>
#include <Il2CppModLoader/app/types/NewLocation.h>
#include <Il2CppModLoader/app/types/Double__Array__Array.h>
#include <Il2CppModLoader/app/types/Point__Array.h>
#include <Il2CppModLoader/app/types/RegionPointer.h>
#include <Il2CppModLoader/app/types/Rectangle.h>
#include <Il2CppModLoader/app/types/TriangleLocator.h>
#include <Il2CppModLoader/app/types/TriangleSampler.h>
#include <Il2CppModLoader/app/types/Mesh_get_Edges_d_39.h>
#include <Il2CppModLoader/app/types/Edge.h>
#include <Il2CppModLoader/app/types/EdgeIterator.h>
#include <Il2CppModLoader/app/types/RobustPredicates.h>
#include <Il2CppModLoader/app/types/TrianglePool_Enumerator.h>
#include <Il2CppModLoader/app/types/TrianglePool_Sample_d_9.h>
#include <Il2CppModLoader/app/types/DcelMesh.h>
#include <Il2CppModLoader/app/types/BoundedVoronoi.h>
#include <Il2CppModLoader/app/types/Vertex_1.h>
#include <Il2CppModLoader/app/types/HalfEdge.h>
#include <Il2CppModLoader/app/types/Face.h>
#include <Il2CppModLoader/app/types/Vertex_1__Array.h>
#include <Il2CppModLoader/app/types/Face__Array.h>
#include <Il2CppModLoader/app/types/IVoronoiFactory.h>
#include <Il2CppModLoader/app/types/List_1_TriangleNet_Topology_DCEL_HalfEdge___Array.h>
#include <Il2CppModLoader/app/types/DefaultVoronoiFactory.h>
#include <Il2CppModLoader/app/types/VoronoiRegion.h>
#include <Il2CppModLoader/app/types/Face_EnumerateEdges_d_18.h>
#include <Il2CppModLoader/app/types/Vertex_EnumerateEdges_d_6.h>
#include <Il2CppModLoader/app/types/AdjacencyMatrix.h>
#include <Il2CppModLoader/app/types/CuthillMcKee.h>
#include <Il2CppModLoader/app/types/IPolygon.h>
#include <Il2CppModLoader/app/types/QualityMeasure_AreaMeasure.h>
#include <Il2CppModLoader/app/types/QualityMeasure_AlphaMeasure.h>
#include <Il2CppModLoader/app/types/QualityMeasure_Q_Measure.h>
#include <Il2CppModLoader/app/types/Statistic.h>
#include <Il2CppModLoader/app/types/TriangleQuadTree_QuadNode.h>
#include <Il2CppModLoader/app/types/TriangleQuadTree_QuadNode__Array.h>
#include <Il2CppModLoader/app/types/VertexSorter.h>
#include <Il2CppModLoader/app/types/ConstraintOptions.h>
#include <Il2CppModLoader/app/types/IMesh.h>
#include <Il2CppModLoader/app/types/Polygon.h>
#include <Il2CppModLoader/app/types/Contour.h>
#include <Il2CppModLoader/app/types/SimpleSmoother_c.h>
#include <Il2CppModLoader/app/types/VoronoiFactory.h>
#include <Il2CppModLoader/app/types/ConstraintMesher.h>
#include <Il2CppModLoader/app/types/List_1_TriangleNet_Topology_Otri___Array.h>
#include <Il2CppModLoader/app/types/GenericMesher.h>
#include <Il2CppModLoader/app/types/ITriangulator.h>
#include <Il2CppModLoader/app/types/RegionIterator.h>
#include <Il2CppModLoader/app/types/RegionIterator_c_DisplayClass2_0.h>
#include <Il2CppModLoader/app/types/RegionIterator_c_DisplayClass3_0.h>
#include <Il2CppModLoader/app/types/RegionIterator_c.h>
#include <Il2CppModLoader/app/types/VertexCirculator_EnumerateVertices_d_2.h>
#include <Il2CppModLoader/app/types/VertexCirculator_EnumerateTriangles_d_3.h>
#include <Il2CppModLoader/app/types/Dwyer.h>
#include <Il2CppModLoader/app/types/SweepLine.h>

namespace app::classes::types {
    namespace IRuntimeDynamicDataLink { IL2CPP_MODLOADER_DLLEXPORT ::app::IRuntimeDynamicDataLink__Class** type_info = (::app::IRuntimeDynamicDataLink__Class**)(modloader::win::memory::resolve_rva(0x04749DA8)); }
    namespace IMoonTypeResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::IMoonTypeResolver__Class** type_info = (::app::IMoonTypeResolver__Class**)(modloader::win::memory::resolve_rva(0x0471A9C0)); }
    namespace MoonInt { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonInt__Class** type_info = (::app::MoonInt__Class**)(modloader::win::memory::resolve_rva(0x0470A200)); }
    namespace MoonVector3 { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonVector3__Class** type_info = (::app::MoonVector3__Class**)(modloader::win::memory::resolve_rva(0x04789FE8)); }
    namespace DynamicDataExportAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataExportAttribute__Class** type_info = (::app::DynamicDataExportAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476D240)); }
    namespace DynamicDataExportClassAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataExportClassAttribute__Class** type_info = (::app::DynamicDataExportClassAttribute__Class**)(modloader::win::memory::resolve_rva(0x0471BCD8)); }
    namespace DynamicDataLinkUtils_c_DisplayClass8_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass8_0__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04723608)); }
    namespace DynamicDataLinkUtils_c_DisplayClass9_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass9_0__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass9_0__Class**)(modloader::win::memory::resolve_rva(0x04732338)); }
    namespace DynamicDataLinkUtils_c_DisplayClass9_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass9_1__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass9_1__Class**)(modloader::win::memory::resolve_rva(0x04708C68)); }
    namespace DynamicDataLinkUtils_c_DisplayClass9_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass9_2__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass9_2__Class**)(modloader::win::memory::resolve_rva(0x04723198)); }
    namespace DynamicDataLinkUtils_c_DisplayClass10_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass10_0__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x04781340)); }
    namespace DynamicDataLinkUtils_c_DisplayClass11_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass11_0__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04727710)); }
    namespace DynamicDataLinkUtils_c_DisplayClass12_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass12_0__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass12_0__Class**)(modloader::win::memory::resolve_rva(0x047322F8)); }
    namespace DynamicDataLinkUtils_c_DisplayClass13_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass13_0__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass13_0__Class**)(modloader::win::memory::resolve_rva(0x04710370)); }
    namespace DynamicDataLinkUtils_c_DisplayClass17_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass17_0__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x04736FE0)); }
    namespace DynamicDataLinkUtils_c_DisplayClass18_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils_c_DisplayClass18_0__Class** type_info = (::app::DynamicDataLinkUtils_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x0471CBF0)); }
    namespace DynamicDataResolver_IntEqualityComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataResolver_IntEqualityComparer__Class** type_info = (::app::DynamicDataResolver_IntEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04777720)); }
    namespace MoonBool { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonBool__Class** type_info = (::app::MoonBool__Class**)(modloader::win::memory::resolve_rva(0x0476DC70)); }
    namespace MoonColor { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonColor__Class** type_info = (::app::MoonColor__Class**)(modloader::win::memory::resolve_rva(0x04734E50)); }
    namespace MoonFloat { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonFloat__Class** type_info = (::app::MoonFloat__Class**)(modloader::win::memory::resolve_rva(0x04747408)); }
    namespace MoonQuaternion { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonQuaternion__Class** type_info = (::app::MoonQuaternion__Class**)(modloader::win::memory::resolve_rva(0x04759DE0)); }
    namespace Behavior { IL2CPP_MODLOADER_DLLEXPORT ::app::Behavior__Class** type_info = (::app::Behavior__Class**)(modloader::win::memory::resolve_rva(0x04717910)); }
    namespace ITriangle { IL2CPP_MODLOADER_DLLEXPORT ::app::ITriangle__Class** type_info = (::app::ITriangle__Class**)(modloader::win::memory::resolve_rva(0x0471BC50)); }
    namespace Configuration_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Configuration_1__Class** type_info = (::app::Configuration_1__Class**)(modloader::win::memory::resolve_rva(0x04739060)); }
    namespace IPredicates { IL2CPP_MODLOADER_DLLEXPORT ::app::IPredicates__Class** type_info = (::app::IPredicates__Class**)(modloader::win::memory::resolve_rva(0x04708338)); }
    namespace TrianglePool { IL2CPP_MODLOADER_DLLEXPORT ::app::TrianglePool__Class** type_info = (::app::TrianglePool__Class**)(modloader::win::memory::resolve_rva(0x04758108)); }
    namespace Triangle { IL2CPP_MODLOADER_DLLEXPORT ::app::Triangle__Class** type_info = (::app::Triangle__Class**)(modloader::win::memory::resolve_rva(0x04729078)); }
    namespace Otri { IL2CPP_MODLOADER_DLLEXPORT ::app::Otri__Class** type_info = (::app::Otri__Class**)(modloader::win::memory::resolve_rva(0x0474B600)); }
    namespace Otri__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Otri__Array__Class** type_info = (::app::Otri__Array__Class**)(modloader::win::memory::resolve_rva(0x04763D30)); }
    namespace Point { IL2CPP_MODLOADER_DLLEXPORT ::app::Point__Class** type_info = (::app::Point__Class**)(modloader::win::memory::resolve_rva(0x0475ADA0)); }
    namespace Vertex { IL2CPP_MODLOADER_DLLEXPORT ::app::Vertex__Class** type_info = (::app::Vertex__Class**)(modloader::win::memory::resolve_rva(0x0470BD50)); }
    namespace Vertex__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Vertex__Array__Class** type_info = (::app::Vertex__Array__Class**)(modloader::win::memory::resolve_rva(0x04772098)); }
    namespace SubSegment { IL2CPP_MODLOADER_DLLEXPORT ::app::SubSegment__Class** type_info = (::app::SubSegment__Class**)(modloader::win::memory::resolve_rva(0x0473BA78)); }
    namespace Osub__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Osub__Array__Class** type_info = (::app::Osub__Array__Class**)(modloader::win::memory::resolve_rva(0x047871F0)); }
    namespace ISegment { IL2CPP_MODLOADER_DLLEXPORT ::app::ISegment__Class** type_info = (::app::ISegment__Class**)(modloader::win::memory::resolve_rva(0x04783BD0)); }
    namespace Triangle__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Triangle__Array__Class** type_info = (::app::Triangle__Array__Class**)(modloader::win::memory::resolve_rva(0x047906D0)); }
    namespace Triangle__Array__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Triangle__Array__Array__Class** type_info = (::app::Triangle__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04782C08)); }
    namespace Configuration_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Configuration_c__Class** type_info = (::app::Configuration_c__Class**)(modloader::win::memory::resolve_rva(0x0475E3A8)); }
    namespace Log { IL2CPP_MODLOADER_DLLEXPORT ::app::Log__Class** type_info = (::app::Log__Class**)(modloader::win::memory::resolve_rva(0x04791C70)); }
    namespace LogItem { IL2CPP_MODLOADER_DLLEXPORT ::app::LogItem__Class** type_info = (::app::LogItem__Class**)(modloader::win::memory::resolve_rva(0x047133C0)); }
    namespace Mesh_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Mesh_1__Class** type_info = (::app::Mesh_1__Class**)(modloader::win::memory::resolve_rva(0x0477F4E8)); }
    namespace QualityMesher { IL2CPP_MODLOADER_DLLEXPORT ::app::QualityMesher__Class** type_info = (::app::QualityMesher__Class**)(modloader::win::memory::resolve_rva(0x0478EF50)); }
    namespace BadSubseg { IL2CPP_MODLOADER_DLLEXPORT ::app::BadSubseg__Class** type_info = (::app::BadSubseg__Class**)(modloader::win::memory::resolve_rva(0x04717700)); }
    namespace BadTriQueue { IL2CPP_MODLOADER_DLLEXPORT ::app::BadTriQueue__Class** type_info = (::app::BadTriQueue__Class**)(modloader::win::memory::resolve_rva(0x04755B88)); }
    namespace BadTriangle { IL2CPP_MODLOADER_DLLEXPORT ::app::BadTriangle__Class** type_info = (::app::BadTriangle__Class**)(modloader::win::memory::resolve_rva(0x04742B68)); }
    namespace BadTriangle__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::BadTriangle__Array__Class** type_info = (::app::BadTriangle__Array__Class**)(modloader::win::memory::resolve_rva(0x0472C2E8)); }
    namespace NewLocation { IL2CPP_MODLOADER_DLLEXPORT ::app::NewLocation__Class** type_info = (::app::NewLocation__Class**)(modloader::win::memory::resolve_rva(0x0472FFE8)); }
    namespace Double__Array__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Double__Array__Array__Class** type_info = (::app::Double__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04774100)); }
    namespace Point__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Point__Array__Class** type_info = (::app::Point__Array__Class**)(modloader::win::memory::resolve_rva(0x04758100)); }
    namespace RegionPointer { IL2CPP_MODLOADER_DLLEXPORT ::app::RegionPointer__Class** type_info = (::app::RegionPointer__Class**)(modloader::win::memory::resolve_rva(0x0471DBE8)); }
    namespace Rectangle { IL2CPP_MODLOADER_DLLEXPORT ::app::Rectangle__Class** type_info = (::app::Rectangle__Class**)(modloader::win::memory::resolve_rva(0x0477A0C8)); }
    namespace TriangleLocator { IL2CPP_MODLOADER_DLLEXPORT ::app::TriangleLocator__Class** type_info = (::app::TriangleLocator__Class**)(modloader::win::memory::resolve_rva(0x0475BAC0)); }
    namespace TriangleSampler { IL2CPP_MODLOADER_DLLEXPORT ::app::TriangleSampler__Class** type_info = (::app::TriangleSampler__Class**)(modloader::win::memory::resolve_rva(0x04730F48)); }
    namespace Mesh_get_Edges_d_39 { IL2CPP_MODLOADER_DLLEXPORT ::app::Mesh_get_Edges_d_39__Class** type_info = (::app::Mesh_get_Edges_d_39__Class**)(modloader::win::memory::resolve_rva(0x04720E30)); }
    namespace Edge { IL2CPP_MODLOADER_DLLEXPORT ::app::Edge__Class** type_info = (::app::Edge__Class**)(modloader::win::memory::resolve_rva(0x04794DC0)); }
    namespace EdgeIterator { IL2CPP_MODLOADER_DLLEXPORT ::app::EdgeIterator__Class** type_info = (::app::EdgeIterator__Class**)(modloader::win::memory::resolve_rva(0x04727498)); }
    namespace RobustPredicates { IL2CPP_MODLOADER_DLLEXPORT ::app::RobustPredicates__Class** type_info = (::app::RobustPredicates__Class**)(modloader::win::memory::resolve_rva(0x04761358)); }
    namespace TrianglePool_Enumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::TrianglePool_Enumerator__Class** type_info = (::app::TrianglePool_Enumerator__Class**)(modloader::win::memory::resolve_rva(0x04735930)); }
    namespace TrianglePool_Sample_d_9 { IL2CPP_MODLOADER_DLLEXPORT ::app::TrianglePool_Sample_d_9__Class** type_info = (::app::TrianglePool_Sample_d_9__Class**)(modloader::win::memory::resolve_rva(0x0474D0B0)); }
    namespace DcelMesh { IL2CPP_MODLOADER_DLLEXPORT ::app::DcelMesh__Class** type_info = (::app::DcelMesh__Class**)(modloader::win::memory::resolve_rva(0x04700AC8)); }
    namespace BoundedVoronoi { IL2CPP_MODLOADER_DLLEXPORT ::app::BoundedVoronoi__Class** type_info = (::app::BoundedVoronoi__Class**)(modloader::win::memory::resolve_rva(0x04722E30)); }
    namespace Vertex_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Vertex_1__Class** type_info = (::app::Vertex_1__Class**)(modloader::win::memory::resolve_rva(0x04796FC8)); }
    namespace HalfEdge { IL2CPP_MODLOADER_DLLEXPORT ::app::HalfEdge__Class** type_info = (::app::HalfEdge__Class**)(modloader::win::memory::resolve_rva(0x0470BAF0)); }
    namespace Face { IL2CPP_MODLOADER_DLLEXPORT ::app::Face__Class** type_info = (::app::Face__Class**)(modloader::win::memory::resolve_rva(0x0477FF10)); }
    namespace Vertex_1__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Vertex_1__Array__Class** type_info = (::app::Vertex_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04714FE0)); }
    namespace Face__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Face__Array__Class** type_info = (::app::Face__Array__Class**)(modloader::win::memory::resolve_rva(0x0475B0C0)); }
    namespace IVoronoiFactory { IL2CPP_MODLOADER_DLLEXPORT ::app::IVoronoiFactory__Class** type_info = (::app::IVoronoiFactory__Class**)(modloader::win::memory::resolve_rva(0x04781C78)); }
    namespace List_1_TriangleNet_Topology_DCEL_HalfEdge___Array { IL2CPP_MODLOADER_DLLEXPORT ::app::List_1_TriangleNet_Topology_DCEL_HalfEdge___Array__Class** type_info = (::app::List_1_TriangleNet_Topology_DCEL_HalfEdge___Array__Class**)(modloader::win::memory::resolve_rva(0x04713710)); }
    namespace DefaultVoronoiFactory { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultVoronoiFactory__Class** type_info = (::app::DefaultVoronoiFactory__Class**)(modloader::win::memory::resolve_rva(0x0475A8A8)); }
    namespace VoronoiRegion { IL2CPP_MODLOADER_DLLEXPORT ::app::VoronoiRegion__Class** type_info = (::app::VoronoiRegion__Class**)(modloader::win::memory::resolve_rva(0x0477AB40)); }
    namespace Face_EnumerateEdges_d_18 { IL2CPP_MODLOADER_DLLEXPORT ::app::Face_EnumerateEdges_d_18__Class** type_info = (::app::Face_EnumerateEdges_d_18__Class**)(modloader::win::memory::resolve_rva(0x04797988)); }
    namespace Vertex_EnumerateEdges_d_6 { IL2CPP_MODLOADER_DLLEXPORT ::app::Vertex_EnumerateEdges_d_6__Class** type_info = (::app::Vertex_EnumerateEdges_d_6__Class**)(modloader::win::memory::resolve_rva(0x047611F0)); }
    namespace AdjacencyMatrix { IL2CPP_MODLOADER_DLLEXPORT ::app::AdjacencyMatrix__Class** type_info = (::app::AdjacencyMatrix__Class**)(modloader::win::memory::resolve_rva(0x04759A58)); }
    namespace CuthillMcKee { IL2CPP_MODLOADER_DLLEXPORT ::app::CuthillMcKee__Class** type_info = (::app::CuthillMcKee__Class**)(modloader::win::memory::resolve_rva(0x0472BDA0)); }
    namespace IPolygon { IL2CPP_MODLOADER_DLLEXPORT ::app::IPolygon__Class** type_info = (::app::IPolygon__Class**)(modloader::win::memory::resolve_rva(0x04731130)); }
    namespace QualityMeasure_AreaMeasure { IL2CPP_MODLOADER_DLLEXPORT ::app::QualityMeasure_AreaMeasure__Class** type_info = (::app::QualityMeasure_AreaMeasure__Class**)(modloader::win::memory::resolve_rva(0x04722D38)); }
    namespace QualityMeasure_AlphaMeasure { IL2CPP_MODLOADER_DLLEXPORT ::app::QualityMeasure_AlphaMeasure__Class** type_info = (::app::QualityMeasure_AlphaMeasure__Class**)(modloader::win::memory::resolve_rva(0x0475D310)); }
    namespace QualityMeasure_Q_Measure { IL2CPP_MODLOADER_DLLEXPORT ::app::QualityMeasure_Q_Measure__Class** type_info = (::app::QualityMeasure_Q_Measure__Class**)(modloader::win::memory::resolve_rva(0x0474A7E0)); }
    namespace Statistic { IL2CPP_MODLOADER_DLLEXPORT ::app::Statistic__Class** type_info = (::app::Statistic__Class**)(modloader::win::memory::resolve_rva(0x04721BB8)); }
    namespace TriangleQuadTree_QuadNode { IL2CPP_MODLOADER_DLLEXPORT ::app::TriangleQuadTree_QuadNode__Class** type_info = (::app::TriangleQuadTree_QuadNode__Class**)(modloader::win::memory::resolve_rva(0x04753A50)); }
    namespace TriangleQuadTree_QuadNode__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::TriangleQuadTree_QuadNode__Array__Class** type_info = (::app::TriangleQuadTree_QuadNode__Array__Class**)(modloader::win::memory::resolve_rva(0x04749700)); }
    namespace VertexSorter { IL2CPP_MODLOADER_DLLEXPORT ::app::VertexSorter__Class** type_info = (::app::VertexSorter__Class**)(modloader::win::memory::resolve_rva(0x0471AA48)); }
    namespace ConstraintOptions { IL2CPP_MODLOADER_DLLEXPORT ::app::ConstraintOptions__Class** type_info = (::app::ConstraintOptions__Class**)(modloader::win::memory::resolve_rva(0x047729C8)); }
    namespace IMesh { IL2CPP_MODLOADER_DLLEXPORT ::app::IMesh__Class** type_info = (::app::IMesh__Class**)(modloader::win::memory::resolve_rva(0x04775558)); }
    namespace Polygon { IL2CPP_MODLOADER_DLLEXPORT ::app::Polygon__Class** type_info = (::app::Polygon__Class**)(modloader::win::memory::resolve_rva(0x04753BF0)); }
    namespace Contour { IL2CPP_MODLOADER_DLLEXPORT ::app::Contour__Class** type_info = (::app::Contour__Class**)(modloader::win::memory::resolve_rva(0x047616C8)); }
    namespace SimpleSmoother_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleSmoother_c__Class** type_info = (::app::SimpleSmoother_c__Class**)(modloader::win::memory::resolve_rva(0x04760E18)); }
    namespace VoronoiFactory { IL2CPP_MODLOADER_DLLEXPORT ::app::VoronoiFactory__Class** type_info = (::app::VoronoiFactory__Class**)(modloader::win::memory::resolve_rva(0x0478DDA0)); }
    namespace ConstraintMesher { IL2CPP_MODLOADER_DLLEXPORT ::app::ConstraintMesher__Class** type_info = (::app::ConstraintMesher__Class**)(modloader::win::memory::resolve_rva(0x04763108)); }
    namespace List_1_TriangleNet_Topology_Otri___Array { IL2CPP_MODLOADER_DLLEXPORT ::app::List_1_TriangleNet_Topology_Otri___Array__Class** type_info = (::app::List_1_TriangleNet_Topology_Otri___Array__Class**)(modloader::win::memory::resolve_rva(0x0470ED68)); }
    namespace GenericMesher { IL2CPP_MODLOADER_DLLEXPORT ::app::GenericMesher__Class** type_info = (::app::GenericMesher__Class**)(modloader::win::memory::resolve_rva(0x04721790)); }
    namespace ITriangulator { IL2CPP_MODLOADER_DLLEXPORT ::app::ITriangulator__Class** type_info = (::app::ITriangulator__Class**)(modloader::win::memory::resolve_rva(0x0470D678)); }
    namespace RegionIterator { IL2CPP_MODLOADER_DLLEXPORT ::app::RegionIterator__Class** type_info = (::app::RegionIterator__Class**)(modloader::win::memory::resolve_rva(0x047044C0)); }
    namespace RegionIterator_c_DisplayClass2_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::RegionIterator_c_DisplayClass2_0__Class** type_info = (::app::RegionIterator_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04763AB8)); }
    namespace RegionIterator_c_DisplayClass3_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::RegionIterator_c_DisplayClass3_0__Class** type_info = (::app::RegionIterator_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04705320)); }
    namespace RegionIterator_c { IL2CPP_MODLOADER_DLLEXPORT ::app::RegionIterator_c__Class** type_info = (::app::RegionIterator_c__Class**)(modloader::win::memory::resolve_rva(0x047598C0)); }
    namespace VertexCirculator_EnumerateVertices_d_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::VertexCirculator_EnumerateVertices_d_2__Class** type_info = (::app::VertexCirculator_EnumerateVertices_d_2__Class**)(modloader::win::memory::resolve_rva(0x0471B888)); }
    namespace VertexCirculator_EnumerateTriangles_d_3 { IL2CPP_MODLOADER_DLLEXPORT ::app::VertexCirculator_EnumerateTriangles_d_3__Class** type_info = (::app::VertexCirculator_EnumerateTriangles_d_3__Class**)(modloader::win::memory::resolve_rva(0x04792CC0)); }
    namespace Dwyer { IL2CPP_MODLOADER_DLLEXPORT ::app::Dwyer__Class** type_info = (::app::Dwyer__Class**)(modloader::win::memory::resolve_rva(0x04726298)); }
    namespace SweepLine { IL2CPP_MODLOADER_DLLEXPORT ::app::SweepLine__Class** type_info = (::app::SweepLine__Class**)(modloader::win::memory::resolve_rva(0x0472EA20)); }
}
