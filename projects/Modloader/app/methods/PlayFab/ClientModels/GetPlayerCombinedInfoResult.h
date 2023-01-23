#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoResult.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerCombinedInfoResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerCombinedInfoResult * this_ptr))
}
