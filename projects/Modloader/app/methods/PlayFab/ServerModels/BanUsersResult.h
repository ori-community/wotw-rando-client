#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BanUsersResult.h>

namespace app::classes::PlayFab::ServerModels::BanUsersResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BanUsersResult * this_ptr))
}
