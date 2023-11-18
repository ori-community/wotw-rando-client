#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerAdOpenedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerAdOpenedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerAdOpenedEventData * this_ptr))
}
