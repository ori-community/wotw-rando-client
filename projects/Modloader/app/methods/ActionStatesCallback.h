#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ActionStatesCallback {
    IL2CPP_REGISTER_METHOD(0x02E8DAC0, void, OnResult, (app::ActionStatesCallback * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::List_1_ServerTriggeredActionData_*, get_Actions, (app::ActionStatesCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E8DEB0, void, ctor, (app::ActionStatesCallback * this_ptr))
} // namespace app::classes::ActionStatesCallback
