#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleLimitChangedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleLimitChangedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleLimitChangedEventData* this_ptr)
}
