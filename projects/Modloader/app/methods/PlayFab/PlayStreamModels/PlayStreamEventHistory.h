#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayStreamEventHistory.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayStreamEventHistory {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayStreamEventHistory * this_ptr))
}
