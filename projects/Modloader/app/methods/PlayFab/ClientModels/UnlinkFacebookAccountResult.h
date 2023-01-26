#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkFacebookAccountResult.h>

namespace app::classes::PlayFab::ClientModels::UnlinkFacebookAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkFacebookAccountResult * this_ptr))
}
