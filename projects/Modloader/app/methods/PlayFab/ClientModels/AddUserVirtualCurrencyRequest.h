#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddUserVirtualCurrencyRequest.h>

namespace app::classes::PlayFab::ClientModels::AddUserVirtualCurrencyRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AddUserVirtualCurrencyRequest* this_ptr)
}
