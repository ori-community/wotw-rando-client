#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SmoothCurve_PathNode.h>

namespace app::classes::SmoothCurve_PathNode {
    IL2CPP_REGISTER_METHOD(0x006D2A40, bool, get_TangentsAreLinked, app::SmoothCurve_PathNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SmoothCurve_PathNode* this_ptr)
} // namespace app::classes::SmoothCurve_PathNode
