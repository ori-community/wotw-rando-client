#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PathNode.h>

namespace app::classes::PathNode {
    IL2CPP_REGISTER_METHOD(0x004485B0, bool, get_TangentsAreLinked, app::PathNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PathNode* this_ptr)
} // namespace app::classes::PathNode
