#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthenticateSessionTicketResult.h>

namespace app::classes::PlayFab::ServerModels::AuthenticateSessionTicketResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AuthenticateSessionTicketResult* this_ptr)
}
