#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OnCollisionExit.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::fsm::triggers::OnCollisionExit {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::OnCollisionExit * this_ptr, app::Collision* collision))
}
