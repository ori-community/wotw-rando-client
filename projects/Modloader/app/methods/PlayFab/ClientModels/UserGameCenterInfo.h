#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserGameCenterInfo.h>

namespace app::classes::PlayFab::ClientModels::UserGameCenterInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UserGameCenterInfo* this_ptr)
}
