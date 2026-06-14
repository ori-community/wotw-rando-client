#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerTagAddedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerTagAddedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerTagAddedEventData* this_ptr)
}
