#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnUntrapped.h>

namespace app::classes::fsm::triggers::OnUntrapped {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OnUntrapped* this_ptr)
}
