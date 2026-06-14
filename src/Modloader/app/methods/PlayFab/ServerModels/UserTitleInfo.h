#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserTitleInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserTitleInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UserTitleInfo_1* this_ptr)
}
