#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureTool_Vertex.h>
#include <Modloader/app/structs/HashSet_1_CageStructureTool_Vertex_.h>
#include <Modloader/app/structs/IEnumerable_1_CageStructureTool_Vertex_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_CageStructureTool_Vertex_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, app::HashSet_1_CageStructureTool_Vertex_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_CageStructureTool_Vertex_* this_ptr, app::CageStructureTool_Vertex* item)
    IL2CPP_REGISTER_METHOD(
        0x02AB4420,
        void,
        ctor_2,
        app::HashSet_1_CageStructureTool_Vertex_* this_ptr,
        app::IEnumerable_1_CageStructureTool_Vertex_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02ABEAC0, bool, Contains, app::HashSet_1_CageStructureTool_Vertex_* this_ptr, app::CageStructureTool_Vertex* item)
} // namespace app::classes::System::Collections::Generic::HashSet_1_CageStructureTool_Vertex_
