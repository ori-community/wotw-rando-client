#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerCombinedInfoResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetPlayerCombinedInfoResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetPlayerCombinedInfoResult_1* this_ptr)
}
