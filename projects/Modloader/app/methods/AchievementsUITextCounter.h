#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementsUITextCounter.h>

namespace app::classes::AchievementsUITextCounter {
    IL2CPP_REGISTER_METHOD(0x004C0FC0, void, Awake, (app::AchievementsUITextCounter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C1050, void, OnEnable, (app::AchievementsUITextCounter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AchievementsUITextCounter * this_ptr))
} // namespace app::classes::AchievementsUITextCounter
