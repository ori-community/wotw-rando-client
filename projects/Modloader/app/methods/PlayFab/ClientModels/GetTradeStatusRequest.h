#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetTradeStatusRequest.h>

namespace app::classes::PlayFab::ClientModels::GetTradeStatusRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetTradeStatusRequest * this_ptr))
}
