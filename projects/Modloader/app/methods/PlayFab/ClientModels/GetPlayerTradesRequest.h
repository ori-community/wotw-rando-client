#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerTradesRequest.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerTradesRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerTradesRequest * this_ptr))
}
