#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TitleSecretKeyEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleSecretKeyEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleSecretKeyEventData * this_ptr))
}
