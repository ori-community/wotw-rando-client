#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterStatisticDeletedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::CharacterStatisticDeletedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterStatisticDeletedEventData * this_ptr))
}
