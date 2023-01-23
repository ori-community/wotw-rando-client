#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RemoveFriendResult.h>

namespace app::classes::PlayFab::ClientModels::RemoveFriendResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemoveFriendResult * this_ptr))
}
