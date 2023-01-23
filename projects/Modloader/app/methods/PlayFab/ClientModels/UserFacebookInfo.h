#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserFacebookInfo.h>

namespace app::classes::PlayFab::ClientModels::UserFacebookInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserFacebookInfo * this_ptr))
}
