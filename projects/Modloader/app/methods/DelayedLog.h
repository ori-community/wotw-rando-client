#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/DelayedLog.h>

namespace app::classes::DelayedLog {
    IL2CPP_REGISTER_METHOD(0x02F87CC0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02F87E20, void, RegisterDelayedDebugLog, (app::Action * action))
    IL2CPP_REGISTER_METHOD(0x02F87EF0, void, Update, ())
    IL2CPP_REGISTER_METHOD(0x02F880A0, void, EditorUpdate, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DelayedLog * this_ptr))
} // namespace app::classes::DelayedLog
