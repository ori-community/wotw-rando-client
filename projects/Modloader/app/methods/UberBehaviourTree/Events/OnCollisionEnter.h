#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/OnCollisionEnter_1.h>

namespace app::classes::UberBehaviourTree::Events::OnCollisionEnter {
    IL2CPP_REGISTER_METHOD(0x013E22C0, void, ctor, app::OnCollisionEnter_1* this_ptr, app::Collision* collision)
}
