#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerLinkedAccountEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerLinkedAccountEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerLinkedAccountEventData* this_ptr)
}
