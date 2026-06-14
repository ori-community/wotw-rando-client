#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AdvancedPushPlatformMsg.h>

namespace app::classes::PlayFab::ServerModels::AdvancedPushPlatformMsg {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AdvancedPushPlatformMsg* this_ptr)
}
