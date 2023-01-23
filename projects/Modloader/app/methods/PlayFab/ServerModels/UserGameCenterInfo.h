#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserGameCenterInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserGameCenterInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserGameCenterInfo_1 * this_ptr))
}
