#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkKongregateAccountResult.h>

namespace app::classes::PlayFab::ClientModels::UnlinkKongregateAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkKongregateAccountResult * this_ptr))
}
