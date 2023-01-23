#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetPlayerProfileResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetPlayerProfileResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerProfileResult_1 * this_ptr))
}
