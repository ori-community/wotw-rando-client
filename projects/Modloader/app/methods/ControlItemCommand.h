#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControlItemCommand.h>

namespace app::classes::ControlItemCommand {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ControlItemCommand* this_ptr)
}
