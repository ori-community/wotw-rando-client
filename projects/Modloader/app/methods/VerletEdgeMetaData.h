#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VerletEdgeMetaData.h>
#include <Modloader/app/structs/CageStructureTool_Edge.h>

namespace app::classes::VerletEdgeMetaData {
    IL2CPP_REGISTER_METHOD(0x013C4400, void, OnAddEdge, (app::VerletEdgeMetaData * this_ptr, app::CageStructureTool_Edge* edge))
    IL2CPP_REGISTER_METHOD(0x013C4580, void, OnMergeEdge, (app::VerletEdgeMetaData * this_ptr, app::CageStructureTool_Edge* edge_a, app::CageStructureTool_Edge* edge_b, app::CageStructureTool_Edge* new_edge))
    IL2CPP_REGISTER_METHOD(0x013C4820, void, OnSplitEdge, (app::VerletEdgeMetaData * this_ptr, app::CageStructureTool_Edge* edge, app::CageStructureTool_Edge* new_edge_a, app::CageStructureTool_Edge* new_edge_b))
    IL2CPP_REGISTER_METHOD(0x013C4B00, void, ctor, (app::VerletEdgeMetaData * this_ptr))
} // namespace app::classes::VerletEdgeMetaData
