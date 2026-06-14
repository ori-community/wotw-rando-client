#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnSeinNearExit.h>

namespace app::classes::fsm::triggers::OnSeinNearExit {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OnSeinNearExit* this_ptr)
}
