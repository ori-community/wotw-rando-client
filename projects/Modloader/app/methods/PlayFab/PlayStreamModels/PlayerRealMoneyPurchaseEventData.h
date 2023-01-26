#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerRealMoneyPurchaseEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerRealMoneyPurchaseEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerRealMoneyPurchaseEventData * this_ptr))
}
