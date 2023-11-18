#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserXboxInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserXboxInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserXboxInfo_1 * this_ptr))
}
