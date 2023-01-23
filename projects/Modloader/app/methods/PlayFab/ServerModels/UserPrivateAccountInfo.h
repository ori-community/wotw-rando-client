#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserPrivateAccountInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserPrivateAccountInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserPrivateAccountInfo_1 * this_ptr))
}
