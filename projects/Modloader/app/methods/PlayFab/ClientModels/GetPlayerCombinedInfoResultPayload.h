#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerCombinedInfoResultPayload * this_ptr))
}
