#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RedeemMatchmakerTicketRequest.h>

namespace app::classes::PlayFab::ServerModels::RedeemMatchmakerTicketRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RedeemMatchmakerTicketRequest* this_ptr)
}
