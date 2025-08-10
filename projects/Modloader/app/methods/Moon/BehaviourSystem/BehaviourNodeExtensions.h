#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IBehaviourNode.h>

namespace app::classes::Moon::BehaviourSystem::BehaviourNodeExtensions {
    IL2CPP_REGISTER_METHOD(0x03006580, bool, IsRunningOrBlocking, app::IBehaviourNode* node)
}
