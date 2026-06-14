#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DebugNode.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::BehaviourSystem::DebugNode {
    IL2CPP_REGISTER_METHOD(0x0300CC10, void, OnEnter, app::DebugNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0300CD00, app::BehaviourStatus__Enum, OnExecute, app::DebugNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0300CDA0, void, ctor, app::DebugNode* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::DebugNode
