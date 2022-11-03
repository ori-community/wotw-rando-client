#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::OnlineHandler {
    IL2CPP_REGISTER_METHOD(0x00617340, void, OnEnable, (app::OnlineHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006174B0, void, OnDisable, (app::OnlineHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617550, void, FixedUpdate, (app::OnlineHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617560, void, SetState, (app::OnlineHandler * this_ptr, app::OnlineHandler_OnlineHandlerState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00617640, void, Validate, (app::OnlineHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006178E0, void, ctor, (app::OnlineHandler * this_ptr))
} // namespace app::classes::OnlineHandler
