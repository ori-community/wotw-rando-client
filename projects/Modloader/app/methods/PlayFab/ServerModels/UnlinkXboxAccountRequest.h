#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkXboxAccountRequest_1.h>

namespace app::classes::PlayFab::ServerModels::UnlinkXboxAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkXboxAccountRequest_1 * this_ptr))
}
