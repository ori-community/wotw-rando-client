#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterVCPurchaseEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::CharacterVCPurchaseEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterVCPurchaseEventData * this_ptr))
}
