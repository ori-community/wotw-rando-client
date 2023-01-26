#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginResult.h>

namespace app::classes::PlayFab::ClientModels::LoginResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginResult * this_ptr))
}
