#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotificationChecker.h>
#include <Modloader/app/structs/RaceMenuScreenNotificationSystem_c_DisplayClass6_0.h>

namespace app::classes::RaceMenuScreenNotificationSystem___c__DisplayClass6_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RaceMenuScreenNotificationSystem_c_DisplayClass6_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x004FDA50,
        bool,
        _ShouldShowNotification_b__0,
        app::RaceMenuScreenNotificationSystem_c_DisplayClass6_0* this_ptr,
        app::NotificationChecker* o
    )
} // namespace app::classes::RaceMenuScreenNotificationSystem___c__DisplayClass6_0
