#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OnAnimationOrTransitionEnded.h>

namespace app::classes::fsm::triggers::OnAnimationOrTransitionEnded {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OnAnimationOrTransitionEnded * this_ptr))
}
