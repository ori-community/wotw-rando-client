#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTimeRequest_1.h>

namespace app::classes::PlayFab::ServerModels::GetTimeRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetTimeRequest_1 * this_ptr))
}
