#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OpenTradeRequest.h>

namespace app::classes::PlayFab::ClientModels::OpenTradeRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OpenTradeRequest* this_ptr)
}
