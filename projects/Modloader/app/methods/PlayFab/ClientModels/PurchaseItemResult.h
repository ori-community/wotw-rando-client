#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PurchaseItemResult.h>

namespace app::classes::PlayFab::ClientModels::PurchaseItemResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PurchaseItemResult* this_ptr)
}
