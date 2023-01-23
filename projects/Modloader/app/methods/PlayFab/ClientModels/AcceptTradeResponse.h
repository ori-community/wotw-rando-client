#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AcceptTradeResponse.h>

namespace app::classes::PlayFab::ClientModels::AcceptTradeResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AcceptTradeResponse * this_ptr))
}
