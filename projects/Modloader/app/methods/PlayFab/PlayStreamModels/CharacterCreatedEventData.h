#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterCreatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::CharacterCreatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CharacterCreatedEventData* this_ptr)
}
