#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTradeStatusResponse.h>

namespace app::classes::PlayFab::ClientModels::GetTradeStatusResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetTradeStatusResponse * this_ptr))
}
