#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExtendedPlayerLeaderBoardEntry.h>

namespace app::classes::SystemIntegration::Synchronizer::Statistics::ExtendedPlayerLeaderBoardEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExtendedPlayerLeaderBoardEntry * this_ptr))
}
