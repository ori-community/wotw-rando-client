#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerTradesResponse.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerTradesResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetPlayerTradesResponse* this_ptr)
}
