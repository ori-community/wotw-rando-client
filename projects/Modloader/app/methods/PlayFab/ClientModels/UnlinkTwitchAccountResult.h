#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkTwitchAccountResult.h>

namespace app::classes::PlayFab::ClientModels::UnlinkTwitchAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkTwitchAccountResult * this_ptr))
}
