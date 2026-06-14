#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameServerHostStartedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GameServerHostStartedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GameServerHostStartedEventData* this_ptr)
}
