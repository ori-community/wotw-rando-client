#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AcceptTradeRequest.h>

namespace app::classes::PlayFab::ClientModels::AcceptTradeRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AcceptTradeRequest* this_ptr)
}
