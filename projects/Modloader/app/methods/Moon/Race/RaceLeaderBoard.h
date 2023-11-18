#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceLeaderBoard.h>

namespace app::classes::Moon::Race::RaceLeaderBoard {
    IL2CPP_REGISTER_METHOD(0x00C48AA0, void, ctor, (app::RaceLeaderBoard * this_ptr))
}
