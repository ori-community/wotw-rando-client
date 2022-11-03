#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Meshing::ConstraintMesher {
    IL2CPP_REGISTER_METHOD(0x02639E10, void, ctor, (app::ConstraintMesher * this_ptr, app::Mesh_1* mesh, app::Configuration_1* config))
    IL2CPP_REGISTER_METHOD(0x02639FF0, void, Apply, (app::ConstraintMesher * this_ptr, app::IPolygon* input, app::ConstraintOptions* options))
    IL2CPP_REGISTER_METHOD(0x0263A330, void, CarveHoles, (app::ConstraintMesher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0263AD70, void, FormSkeleton, (app::ConstraintMesher * this_ptr, app::IPolygon* input))
    IL2CPP_REGISTER_METHOD(0x0263B250, void, InfectHull, (app::ConstraintMesher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0263B500, void, Plague, (app::ConstraintMesher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0263BC60, app::FindDirectionResult__Enum, FindDirection, (app::ConstraintMesher * this_ptr, app::Otri* searchtri, app::Vertex* searchpoint))
    IL2CPP_REGISTER_METHODINFO(0x04760CE0, ConstraintMesher_FindDirection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0263BFE0, void, SegmentIntersection, (app::ConstraintMesher * this_ptr, app::Otri* splittri, app::Osub* splitsubseg, app::Vertex* endpoint2))
    IL2CPP_REGISTER_METHODINFO(0x04737DB0, ConstraintMesher_SegmentIntersection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0263C7F0, bool, ScoutSegment, (app::ConstraintMesher * this_ptr, app::Otri* searchtri, app::Vertex* endpoint2, int32_t newmark))
    IL2CPP_REGISTER_METHOD(0x0263CAB0, void, DelaunayFixup, (app::ConstraintMesher * this_ptr, app::Otri* fixuptri, bool leftside))
    IL2CPP_REGISTER_METHOD(0x0263CE30, void, ConstrainedEdge, (app::ConstraintMesher * this_ptr, app::Otri* starttri, app::Vertex* endpoint2, int32_t newmark))
    IL2CPP_REGISTER_METHOD(0x0263D1F0, void, InsertSegment, (app::ConstraintMesher * this_ptr, app::Vertex* endpoint1, app::Vertex* endpoint2, int32_t newmark))
    IL2CPP_REGISTER_METHODINFO(0x04701230, ConstraintMesher_InsertSegment__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0263D5D0, void, MarkHull, (app::ConstraintMesher * this_ptr))
} // namespace app::classes::TriangleNet::Meshing::ConstraintMesher
