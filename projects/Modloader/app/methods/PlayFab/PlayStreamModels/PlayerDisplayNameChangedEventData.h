#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerDisplayNameChangedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerDisplayNameChangedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerDisplayNameChangedEventData* this_ptr)
}
