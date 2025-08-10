#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelTradeResponse.h>

namespace app::classes::PlayFab::ClientModels::CancelTradeResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CancelTradeResponse* this_ptr)
}
