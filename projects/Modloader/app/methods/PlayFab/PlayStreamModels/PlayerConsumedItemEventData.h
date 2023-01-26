#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerConsumedItemEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerConsumedItemEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerConsumedItemEventData * this_ptr))
}
