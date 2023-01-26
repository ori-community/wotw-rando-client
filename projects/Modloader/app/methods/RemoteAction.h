#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::RemoteAction {
    IL2CPP_REGISTER_METHOD(0x02EA11B0, void, Init, ())
    IL2CPP_REGISTER_METHOD(0x02EA1280, void, Subscribe, (app::String * action_name, app::Action* callback))
    IL2CPP_REGISTER_METHOD(0x02EA1610, void, UnSubscribe, (app::String * action_name, app::Action* callback))
    IL2CPP_REGISTER_METHOD(0x02EA17D0, void, OnActionActivated, (app::String * action_name))
    IL2CPP_REGISTER_METHOD(0x02EA1970, void, StartCheckingThread, ())
    IL2CPP_REGISTER_METHOD(0x02EA1C50, void, cctor, ())
} // namespace app::classes::RemoteAction
