#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QuestReward.h>

namespace app::classes::QuestReward {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::QuestReward * this_ptr))
}
