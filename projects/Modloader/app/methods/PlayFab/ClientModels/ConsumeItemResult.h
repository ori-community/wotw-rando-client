#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsumeItemResult.h>

namespace app::classes::PlayFab::ClientModels::ConsumeItemResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConsumeItemResult * this_ptr))
}
