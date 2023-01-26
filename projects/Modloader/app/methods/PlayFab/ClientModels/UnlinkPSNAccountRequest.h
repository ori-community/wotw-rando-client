#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkPSNAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlinkPSNAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkPSNAccountRequest * this_ptr))
}
