#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SmoothCurve {
    IL2CPP_REGISTER_METHOD(0x006D1790, void, Start, (app::SmoothCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D17A0, void, AutoSmoothNodes, (app::SmoothCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D1B00, void, AutoSmoothNode_1, (app::SmoothCurve * this_ptr, int32_t node_index))
    IL2CPP_REGISTER_METHOD(0x006D1C30, void, AutoSmoothNode_2, (app::SmoothCurve * this_ptr, app::SmoothCurve_PathNode* node, app::Vector2 previous_position, app::Vector2 next_position))
    IL2CPP_REGISTER_METHOD(0x006D1E70, void, ApplyMesh, (app::SmoothCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D2120, void, GenerateMesh, (app::SmoothCurve * this_ptr, app::Mesh* mesh))
    IL2CPP_REGISTER_METHOD(0x006D26A0, app::SmoothCurve_PathNode*, GetNodeWrapped, (app::SmoothCurve * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x006D27A0, app::SmoothCurve_PathNode*, GetNode, (app::SmoothCurve * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x006D2850, int32_t, get_NodeCount, (app::SmoothCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D28E0, void, ctor, (app::SmoothCurve * this_ptr))
} // namespace app::classes::SmoothCurve
