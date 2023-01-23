#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserAccountInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserAccountInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserAccountInfo_1 * this_ptr))
}
