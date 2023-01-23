#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerStartPurchaseEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerStartPurchaseEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerStartPurchaseEventData * this_ptr))
}
