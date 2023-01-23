#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OnCollisionStay.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::fsm::triggers::OnCollisionStay {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::OnCollisionStay * this_ptr, app::Collision* collision))
}
