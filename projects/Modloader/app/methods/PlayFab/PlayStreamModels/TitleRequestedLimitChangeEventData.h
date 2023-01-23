#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TitleRequestedLimitChangeEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleRequestedLimitChangeEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleRequestedLimitChangeEventData * this_ptr))
}
