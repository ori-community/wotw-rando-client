#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerInventoryItemAddedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerInventoryItemAddedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerInventoryItemAddedEventData * this_ptr))
}
