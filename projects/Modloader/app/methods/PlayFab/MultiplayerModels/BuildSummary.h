#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BuildSummary.h>

namespace app::classes::PlayFab::MultiplayerModels::BuildSummary {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BuildSummary * this_ptr))
}
