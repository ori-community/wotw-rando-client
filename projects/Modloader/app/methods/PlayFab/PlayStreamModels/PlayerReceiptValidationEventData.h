#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerReceiptValidationEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerReceiptValidationEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerReceiptValidationEventData * this_ptr))
}
