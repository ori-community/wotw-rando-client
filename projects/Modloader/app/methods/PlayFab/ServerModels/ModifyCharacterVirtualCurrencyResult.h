#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ModifyCharacterVirtualCurrencyResult.h>

namespace app::classes::PlayFab::ServerModels::ModifyCharacterVirtualCurrencyResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ModifyCharacterVirtualCurrencyResult* this_ptr)
}
