#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ValidateAmazonReceiptResult.h>

namespace app::classes::PlayFab::ClientModels::ValidateAmazonReceiptResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ValidateAmazonReceiptResult* this_ptr)
}
