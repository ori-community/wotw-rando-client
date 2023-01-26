#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BatPeerDeath.h>

namespace app::classes::UberBehaviourTree::Events::BatPeerDeath {
    IL2CPP_REGISTER_METHOD(0x013E2180, void, ctor, (app::BatPeerDeath * this_ptr))
}
