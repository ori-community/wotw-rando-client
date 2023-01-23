#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AuthenticateSessionTicketRequest.h>

namespace app::classes::PlayFab::ServerModels::AuthenticateSessionTicketRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AuthenticateSessionTicketRequest * this_ptr))
}
