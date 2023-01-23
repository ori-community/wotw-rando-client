#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetSharedGroupDataResult.h>

namespace app::classes::PlayFab::ClientModels::GetSharedGroupDataResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetSharedGroupDataResult * this_ptr))
}
