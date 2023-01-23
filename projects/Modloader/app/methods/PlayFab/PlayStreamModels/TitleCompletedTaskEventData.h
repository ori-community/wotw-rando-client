#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TitleCompletedTaskEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleCompletedTaskEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleCompletedTaskEventData * this_ptr))
}
