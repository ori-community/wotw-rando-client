#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Meshing::GenericMesher {
    IL2CPP_REGISTER_METHOD(0x02B0F0C0, void, ctor_1, (app::GenericMesher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B0F2D0, void, ctor_2, (app::GenericMesher * this_ptr, app::ITriangulator* triangulator))
    IL2CPP_REGISTER_METHOD(0x02B0F420, void, ctor_3, (app::GenericMesher * this_ptr, app::Configuration_1* config))
    IL2CPP_REGISTER_METHOD(0x01A9AC30, void, ctor_4, (app::GenericMesher * this_ptr, app::ITriangulator* triangulator, app::Configuration_1* config))
    IL2CPP_REGISTER_METHOD(0x02B0F570, app::IMesh*, Triangulate_1, (app::GenericMesher * this_ptr, app::IList_1_TriangleNet_Geometry_Vertex_* points))
    IL2CPP_REGISTER_METHOD(0x02B0F610, app::IMesh*, Triangulate_2, (app::GenericMesher * this_ptr, app::IPolygon* polygon))
    IL2CPP_REGISTER_METHOD(0x02B0F630, app::IMesh*, Triangulate_3, (app::GenericMesher * this_ptr, app::IPolygon* polygon, app::ConstraintOptions* options))
    IL2CPP_REGISTER_METHOD(0x02B0F650, app::IMesh*, Triangulate_4, (app::GenericMesher * this_ptr, app::IPolygon* polygon, app::QualityOptions* quality))
    IL2CPP_REGISTER_METHOD(0x02B0F670, app::IMesh*, Triangulate_5, (app::GenericMesher * this_ptr, app::IPolygon* polygon, app::ConstraintOptions* options, app::QualityOptions* quality))
    IL2CPP_REGISTER_METHOD(0x02B0F990, app::IMesh*, StructuredMesh_1, (double width, double height, int32_t nx, int32_t ny))
    IL2CPP_REGISTER_METHODINFO(0x047938A0, GenericMesher_StructuredMesh__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02B0FBB0, app::IMesh*, StructuredMesh_2, (app::Rectangle * bounds, int32_t nx, int32_t ny))
} // namespace app::classes::TriangleNet::Meshing::GenericMesher
