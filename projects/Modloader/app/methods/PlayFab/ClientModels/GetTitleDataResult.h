#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTitleDataResult.h>

namespace app::classes::PlayFab::ClientModels::GetTitleDataResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetTitleDataResult* this_ptr)
}
