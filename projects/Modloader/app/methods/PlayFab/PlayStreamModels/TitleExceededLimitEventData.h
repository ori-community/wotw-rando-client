#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleExceededLimitEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleExceededLimitEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleExceededLimitEventData* this_ptr)
}
