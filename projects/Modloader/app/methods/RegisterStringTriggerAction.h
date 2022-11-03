#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RegisterStringTriggerAction {
    IL2CPP_REGISTER_METHOD(0x008FD2C0, void, Perform, (app::RegisterStringTriggerAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008FD360, app::String*, GetNiceName, (app::RegisterStringTriggerAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FD400, void, ctor, (app::RegisterStringTriggerAction * this_ptr))
} // namespace app::classes::RegisterStringTriggerAction
