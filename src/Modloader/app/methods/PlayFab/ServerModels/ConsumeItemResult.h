#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsumeItemResult_1.h>

namespace app::classes::PlayFab::ServerModels::ConsumeItemResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ConsumeItemResult_1* this_ptr)
}
