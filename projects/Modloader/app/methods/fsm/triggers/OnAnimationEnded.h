#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnAnimationEnded.h>

namespace app::classes::fsm::triggers::OnAnimationEnded {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OnAnimationEnded* this_ptr)
}
