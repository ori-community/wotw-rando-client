#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RedeemMatchmakerTicketResult.h>

namespace app::classes::PlayFab::ServerModels::RedeemMatchmakerTicketResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RedeemMatchmakerTicketResult * this_ptr))
}
