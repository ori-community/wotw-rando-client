#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetAccountInfoResult.h>

namespace app::classes::PlayFab::ClientModels::GetAccountInfoResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetAccountInfoResult* this_ptr)
}
