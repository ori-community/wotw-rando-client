#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureTool_Vertex.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CageStructureTool_Vertex {
    IL2CPP_REGISTER_METHOD(0x0167FE70, void, ctor, app::CageStructureTool_Vertex* this_ptr, app::Vector3 position, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0167FE90, app::Vector3, get_ScreenPosition, app::CageStructureTool_Vertex* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0167FEB0, void, set_ScreenPosition, app::CageStructureTool_Vertex* this_ptr, app::Vector3 value)
} // namespace app::classes::CageStructureTool_Vertex
