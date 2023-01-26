#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_CageStructureTool_Vertex_CleverMenuItem_.h>
#include <Modloader/app/structs/CageStructureTool_Vertex.h>
#include <Modloader/app/structs/CleverMenuItem.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_CageStructureTool_Vertex_CleverMenuItem_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_CageStructureTool_Vertex_CleverMenuItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_CageStructureTool_Vertex_CleverMenuItem_ * this_ptr, app::CageStructureTool_Vertex* key, app::CleverMenuItem* value))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::CleverMenuItem*, get_Item, (app::Dictionary_2_CageStructureTool_Vertex_CleverMenuItem_ * this_ptr, app::CageStructureTool_Vertex* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_CageStructureTool_Vertex_CleverMenuItem_
