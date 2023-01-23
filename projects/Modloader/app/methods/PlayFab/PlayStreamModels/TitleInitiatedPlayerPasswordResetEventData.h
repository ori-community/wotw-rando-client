#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TitleInitiatedPlayerPasswordResetEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleInitiatedPlayerPasswordResetEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleInitiatedPlayerPasswordResetEventData * this_ptr))
}
