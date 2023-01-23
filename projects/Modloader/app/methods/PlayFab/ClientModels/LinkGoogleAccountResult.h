#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LinkGoogleAccountResult.h>

namespace app::classes::PlayFab::ClientModels::LinkGoogleAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkGoogleAccountResult * this_ptr))
}
