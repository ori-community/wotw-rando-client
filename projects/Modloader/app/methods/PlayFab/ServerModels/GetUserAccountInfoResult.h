#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetUserAccountInfoResult.h>

namespace app::classes::PlayFab::ServerModels::GetUserAccountInfoResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetUserAccountInfoResult * this_ptr))
}
