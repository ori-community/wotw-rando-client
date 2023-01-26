#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerDisplayNameFilteredEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerDisplayNameFilteredEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerDisplayNameFilteredEventData * this_ptr))
}
