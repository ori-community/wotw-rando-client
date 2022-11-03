#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CageEdgeMetaData_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019D8900, void, OnEnable, (app::CageEdgeMetaData_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D9060, void, OnDisable, (app::CageEdgeMetaData_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAddEdge, (app::CageEdgeMetaData_1_System_Object_ * this_ptr, app::CageStructureTool_Edge* edge))
    IL2CPP_REGISTER_METHOD(0x019D9790, void, OnRemoveEdge, (app::CageEdgeMetaData_1_System_Object_ * this_ptr, app::CageStructureTool_Edge* edge))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSplitEdge, (app::CageEdgeMetaData_1_System_Object_ * this_ptr, app::CageStructureTool_Edge* edge, app::CageStructureTool_Edge* new_edge_a, app::CageStructureTool_Edge* new_edge_b))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnMergeEdge, (app::CageEdgeMetaData_1_System_Object_ * this_ptr, app::CageStructureTool_Edge* edge_a, app::CageStructureTool_Edge* edge_b, app::CageStructureTool_Edge* new_edge))
    IL2CPP_REGISTER_METHOD(0x019D97D0, app::Object*, GetMetaData, (app::CageEdgeMetaData_1_System_Object_ * this_ptr, app::CageStructureTool_Edge* edge))
    IL2CPP_REGISTER_METHOD(0x019D98F0, void, CompleteMetadata, (app::CageEdgeMetaData_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D9BE0, void, ctor, (app::CageEdgeMetaData_1_System_Object_ * this_ptr))
} // namespace app::classes::CageEdgeMetaData_1_System_Object_
