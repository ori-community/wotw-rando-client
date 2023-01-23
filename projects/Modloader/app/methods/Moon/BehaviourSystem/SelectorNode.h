#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/SelectorNode.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::BehaviourSystem::SelectorNode {
    IL2CPP_REGISTER_METHOD(0x0300F8A0, app::BehaviourStatus__Enum, OnExecute, (app::SelectorNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300FB60, void, OnReset, (app::SelectorNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300FC00, void, ctor, (app::SelectorNode * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::SelectorNode
