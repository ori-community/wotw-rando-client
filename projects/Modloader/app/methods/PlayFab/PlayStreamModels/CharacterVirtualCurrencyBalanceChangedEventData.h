#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterVirtualCurrencyBalanceChangedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::CharacterVirtualCurrencyBalanceChangedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterVirtualCurrencyBalanceChangedEventData * this_ptr))
}
