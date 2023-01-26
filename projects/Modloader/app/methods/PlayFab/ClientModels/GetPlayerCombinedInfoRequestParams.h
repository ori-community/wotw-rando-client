#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerCombinedInfoRequestParams.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerCombinedInfoRequestParams * this_ptr))
}
