#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkCustomIDRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlinkCustomIDRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkCustomIDRequest * this_ptr))
}
