#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnCollisionEnter.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::fsm::triggers::OnCollisionEnter {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::OnCollisionEnter * this_ptr, app::Collision* collision))
}
