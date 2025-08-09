#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActionStatesCallback.h>
#include <Modloader/app/structs/RemoteAction_c.h>

namespace app::classes::RemoteAction___c {
    IL2CPP_REGISTER_METHOD(0x02EA1DF0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RemoteAction_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EA1F30, void, _StartCheckingThread_b__8_0, app::RemoteAction_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EA2370, void, _StartCheckingThread_b__8_1, app::RemoteAction_c* this_ptr, app::ActionStatesCallback* callback)
} // namespace app::classes::RemoteAction___c
