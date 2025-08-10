#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelTradeRequest.h>

namespace app::classes::PlayFab::ClientModels::CancelTradeRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CancelTradeRequest* this_ptr)
}
