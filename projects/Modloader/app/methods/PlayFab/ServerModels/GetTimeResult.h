#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetTimeResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetTimeResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetTimeResult_1 * this_ptr))
}
