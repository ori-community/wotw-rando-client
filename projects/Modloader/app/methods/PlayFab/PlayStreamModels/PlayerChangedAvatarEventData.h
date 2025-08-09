#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerChangedAvatarEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerChangedAvatarEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerChangedAvatarEventData* this_ptr)
}
