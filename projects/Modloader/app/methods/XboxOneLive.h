#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/XboxOneLive.h>

namespace app::classes::XboxOneLive {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_LiveOnline, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_Online, ())
    IL2CPP_REGISTER_METHOD(0x01C590C0, app::Action*, get_OnOnlineStateChanged, ())
    IL2CPP_REGISTER_METHOD(0x01C59140, void, set_OnOnlineStateChanged, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneLive * this_ptr))
} // namespace app::classes::XboxOneLive
