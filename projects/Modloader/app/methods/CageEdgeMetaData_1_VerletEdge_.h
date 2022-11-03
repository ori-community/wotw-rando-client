#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CageEdgeMetaData_1_VerletEdge_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnMergeEdge, (app::CageEdgeMetaData_1_VerletEdge_ * this_ptr, app::CageStructureTool_Edge* edge_a, app::CageStructureTool_Edge* edge_b, app::CageStructureTool_Edge* new_edge))
    IL2CPP_REGISTER_METHODINFO(0x047229A8, CageEdgeMetaData_1_VerletEdge__OnMergeEdge__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSplitEdge, (app::CageEdgeMetaData_1_VerletEdge_ * this_ptr, app::CageStructureTool_Edge* edge, app::CageStructureTool_Edge* new_edge_a, app::CageStructureTool_Edge* new_edge_b))
    IL2CPP_REGISTER_METHODINFO(0x04753F80, CageEdgeMetaData_1_VerletEdge__OnSplitEdge__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D9BE0, void, ctor, (app::CageEdgeMetaData_1_VerletEdge_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747C68, CageEdgeMetaData_1_VerletEdge___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D9790, void, OnRemoveEdge, (app::CageEdgeMetaData_1_VerletEdge_ * this_ptr, app::CageStructureTool_Edge* edge))
} // namespace app::classes::CageEdgeMetaData_1_VerletEdge_
