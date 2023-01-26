#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerVirtualCurrencyBalanceChangedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerVirtualCurrencyBalanceChangedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerVirtualCurrencyBalanceChangedEventData * this_ptr))
}
