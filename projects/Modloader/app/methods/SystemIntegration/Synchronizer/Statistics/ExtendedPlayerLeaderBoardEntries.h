#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExtendedPlayerLeaderBoardEntries.h>

namespace app::classes::SystemIntegration::Synchronizer::Statistics::ExtendedPlayerLeaderBoardEntries {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExtendedPlayerLeaderBoardEntries * this_ptr))
}
