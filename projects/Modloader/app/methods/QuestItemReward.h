#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QuestItemReward.h>

namespace app::classes::QuestItemReward {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::QuestItemReward * this_ptr))
}
