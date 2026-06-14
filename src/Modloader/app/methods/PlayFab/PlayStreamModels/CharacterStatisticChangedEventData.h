#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterStatisticChangedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::CharacterStatisticChangedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CharacterStatisticChangedEventData* this_ptr)
}
