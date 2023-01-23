#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ValidateWindowsReceiptResult.h>

namespace app::classes::PlayFab::ClientModels::ValidateWindowsReceiptResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ValidateWindowsReceiptResult * this_ptr))
}
