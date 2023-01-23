#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetTimeRequest.h>

namespace app::classes::PlayFab::ClientModels::GetTimeRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetTimeRequest * this_ptr))
}
