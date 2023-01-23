#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility__Boxed.h>
#include <Modloader/app/structs/BehaviourNode.h>

namespace app::classes::Moon::BehaviourSystem::UtilitySelectorNode_NodeUtility {
    IL2CPP_REGISTER_METHOD(0x0011D740, void, ctor, (app::UtilitySelectorNode_NodeUtility__Boxed * this_ptr, app::BehaviourNode* node, float utility))
}
