#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserTitleInfo.h>

namespace app::classes::PlayFab::ClientModels::UserTitleInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UserTitleInfo* this_ptr)
}
