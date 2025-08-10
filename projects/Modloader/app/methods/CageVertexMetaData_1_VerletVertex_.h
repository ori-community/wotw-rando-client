#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureTool_Vertex.h>
#include <Modloader/app/structs/CageVertexMetaData_1_VerletVertex_.h>

namespace app::classes::CageVertexMetaData_1_VerletVertex_ {
    IL2CPP_REGISTER_METHOD(0x019DF3A0, void, ctor, app::CageVertexMetaData_1_VerletVertex_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DEF50, void, OnRemoveVertex, app::CageVertexMetaData_1_VerletVertex_* this_ptr, app::CageStructureTool_Vertex* vertex)
} // namespace app::classes::CageVertexMetaData_1_VerletVertex_
