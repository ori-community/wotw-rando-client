#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserTwitchInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserTwitchInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UserTwitchInfo_1* this_ptr)
}
