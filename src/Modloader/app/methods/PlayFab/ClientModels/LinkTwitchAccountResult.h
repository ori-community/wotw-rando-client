#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkTwitchAccountResult.h>

namespace app::classes::PlayFab::ClientModels::LinkTwitchAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LinkTwitchAccountResult* this_ptr)
}
