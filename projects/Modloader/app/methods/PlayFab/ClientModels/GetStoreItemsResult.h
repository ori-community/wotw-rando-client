#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetStoreItemsResult.h>

namespace app::classes::PlayFab::ClientModels::GetStoreItemsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetStoreItemsResult * this_ptr))
}
