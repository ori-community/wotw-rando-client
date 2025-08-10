#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugUtilityNode.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::BehaviourSystem::DebugUtilityNode {
    IL2CPP_REGISTER_METHOD(0x003FDAA0, float, GetUtility, app::DebugUtilityNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0300CE40, void, ctor, app::DebugUtilityNode* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::DebugUtilityNode
