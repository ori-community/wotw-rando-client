#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTitleDataResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetTitleDataResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetTitleDataResult_1 * this_ptr))
}
