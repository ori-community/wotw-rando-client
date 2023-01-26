#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithEmailAddressRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithEmailAddressRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithEmailAddressRequest * this_ptr))
}
