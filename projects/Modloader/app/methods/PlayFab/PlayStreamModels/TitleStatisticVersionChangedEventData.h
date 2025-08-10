#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleStatisticVersionChangedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleStatisticVersionChangedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleStatisticVersionChangedEventData* this_ptr)
}
