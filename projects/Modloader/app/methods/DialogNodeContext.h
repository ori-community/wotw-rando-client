#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DialogNodeContext.h>

namespace app::classes::DialogNodeContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DialogNodeContext * this_ptr))
}
