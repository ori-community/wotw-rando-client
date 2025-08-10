#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BanInfo.h>

namespace app::classes::PlayFab::ServerModels::BanInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BanInfo* this_ptr)
}
