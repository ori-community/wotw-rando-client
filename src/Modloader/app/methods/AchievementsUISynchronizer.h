#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementsUISynchronizer.h>

namespace app::classes::AchievementsUISynchronizer {
    IL2CPP_REGISTER_METHOD(0x004C0670, bool, get_IsSynchronized, app::AchievementsUISynchronizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C07B0, bool, get_CanSendNetCommunications, app::AchievementsUISynchronizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C0850, void, CacheState, app::AchievementsUISynchronizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C0890, void, Start, app::AchievementsUISynchronizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C0BA0, void, OnEnable, app::AchievementsUISynchronizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C0BE0, void, Update, app::AchievementsUISynchronizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C0C50, void, RefreshUI, app::AchievementsUISynchronizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C0E60, void, ctor, app::AchievementsUISynchronizer* this_ptr)
} // namespace app::classes::AchievementsUISynchronizer
