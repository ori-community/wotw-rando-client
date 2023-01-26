#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Statistics.h>

namespace app::classes::PlayFab::MultiplayerModels::Statistics {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Statistics * this_ptr))
}
