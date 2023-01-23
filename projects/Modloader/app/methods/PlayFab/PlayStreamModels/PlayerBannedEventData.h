#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerBannedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerBannedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerBannedEventData * this_ptr))
}
