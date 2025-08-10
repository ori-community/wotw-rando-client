#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageEdgeMetaData_1_PhysicsEdge_.h>
#include <Modloader/app/structs/CageStructureTool_Edge.h>

namespace app::classes::CageEdgeMetaData_1_PhysicsEdge_ {
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnMergeEdge,
        app::CageEdgeMetaData_1_PhysicsEdge_* this_ptr,
        app::CageStructureTool_Edge* edge_a,
        app::CageStructureTool_Edge* edge_b,
        app::CageStructureTool_Edge* new_edge
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnSplitEdge,
        app::CageEdgeMetaData_1_PhysicsEdge_* this_ptr,
        app::CageStructureTool_Edge* edge,
        app::CageStructureTool_Edge* new_edge_a,
        app::CageStructureTool_Edge* new_edge_b
    )
    IL2CPP_REGISTER_METHOD(0x019D9BE0, void, ctor, app::CageEdgeMetaData_1_PhysicsEdge_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D9790, void, OnRemoveEdge, app::CageEdgeMetaData_1_PhysicsEdge_* this_ptr, app::CageStructureTool_Edge* edge)
} // namespace app::classes::CageEdgeMetaData_1_PhysicsEdge_
