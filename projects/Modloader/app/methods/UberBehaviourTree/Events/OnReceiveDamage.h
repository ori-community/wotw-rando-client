#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnReceiveDamage_1.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::UberBehaviourTree::Events::OnReceiveDamage {
    IL2CPP_REGISTER_METHOD(0x013E2370, void, ctor, (app::OnReceiveDamage_1 * this_ptr, app::Damage* damage))
}
