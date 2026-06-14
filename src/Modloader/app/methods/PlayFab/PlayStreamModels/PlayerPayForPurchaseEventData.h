#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerPayForPurchaseEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerPayForPurchaseEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerPayForPurchaseEventData* this_ptr)
}
