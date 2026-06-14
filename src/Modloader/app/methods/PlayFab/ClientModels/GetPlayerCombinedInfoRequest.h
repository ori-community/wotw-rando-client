#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerCombinedInfoRequest.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerCombinedInfoRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetPlayerCombinedInfoRequest* this_ptr)
}
