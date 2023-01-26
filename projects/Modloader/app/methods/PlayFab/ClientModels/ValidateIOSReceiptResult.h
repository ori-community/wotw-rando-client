#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ValidateIOSReceiptResult.h>

namespace app::classes::PlayFab::ClientModels::ValidateIOSReceiptResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ValidateIOSReceiptResult * this_ptr))
}
