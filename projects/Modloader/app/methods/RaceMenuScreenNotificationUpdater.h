#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RaceMenuScreenNotificationUpdater.h>

namespace app::classes::RaceMenuScreenNotificationUpdater {
    IL2CPP_REGISTER_METHOD(0x0070FB00, void, Update, (app::RaceMenuScreenNotificationUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070FD20, void, OnEnable, (app::RaceMenuScreenNotificationUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070FEF0, void, SetIconPositionX, (app::RaceMenuScreenNotificationUpdater * this_ptr, float x))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RaceMenuScreenNotificationUpdater * this_ptr))
} // namespace app::classes::RaceMenuScreenNotificationUpdater
