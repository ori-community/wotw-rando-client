#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CageStructureTool_Edge {
    IL2CPP_REGISTER_METHOD(0x0167F980, void, ctor, (app::CageStructureTool_Edge * this_ptr, int32_t vertex_a, int32_t vertex_b, int32_t id))
    IL2CPP_REGISTER_METHOD(0x013D2B30, bool, IsConnected_1, (app::CageStructureTool_Edge * this_ptr, app::CageStructureTool_Edge* b))
    IL2CPP_REGISTER_METHOD(0x013D2B70, bool, IsConnected_2, (app::CageStructureTool_Edge * this_ptr, int32_t vertex))
} // namespace app::classes::CageStructureTool_Edge
