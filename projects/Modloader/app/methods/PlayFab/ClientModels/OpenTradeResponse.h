#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OpenTradeResponse.h>

namespace app::classes::PlayFab::ClientModels::OpenTradeResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OpenTradeResponse * this_ptr))
}
