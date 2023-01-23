#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LinkFacebookAccountResult.h>

namespace app::classes::PlayFab::ClientModels::LinkFacebookAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkFacebookAccountResult * this_ptr))
}
