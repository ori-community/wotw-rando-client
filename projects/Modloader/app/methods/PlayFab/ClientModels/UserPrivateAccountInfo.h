#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserPrivateAccountInfo.h>

namespace app::classes::PlayFab::ClientModels::UserPrivateAccountInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UserPrivateAccountInfo* this_ptr)
}
