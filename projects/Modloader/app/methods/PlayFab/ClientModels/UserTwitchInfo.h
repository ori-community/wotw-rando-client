#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserTwitchInfo.h>

namespace app::classes::PlayFab::ClientModels::UserTwitchInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserTwitchInfo * this_ptr))
}
