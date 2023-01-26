#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleScreenManager.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/TitleScreenManager_Screen__Enum.h>

namespace app::classes::TitleScreenManager {
    IL2CPP_REGISTER_METHOD(0x00AF74D0, bool, get_MainMenuActive, ())
    IL2CPP_REGISTER_METHOD(0x00AF7640, void, Awake, (app::TitleScreenManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF78F0, void, Start, (app::TitleScreenManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF7A20, void, Startup, (app::TitleScreenManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF82E0, void, RestartAllAnimators, ())
    IL2CPP_REGISTER_METHOD(0x00AF8450, void, RestartProfileSelectionAnimators, (app::TitleScreenManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF8580, void, OnReturnToTitleScreen, ())
    IL2CPP_REGISTER_METHOD(0x00AF86A0, void, OnDestroy, (app::TitleScreenManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF88F0, app::TitleScreenManager_Screen__Enum, get_CurrentScreen, ())
    IL2CPP_REGISTER_METHOD(0x00AF8A10, void, SetScreen, (app::TitleScreenManager_Screen__Enum screen))
    IL2CPP_REGISTER_METHOD(0x00AF91C0, void, SetScreenImmediate, (app::TitleScreenManager_Screen__Enum screen))
    IL2CPP_REGISTER_METHOD(0x00AF9B50, void, SetVisible, (app::CleverMenuItemSelectionManager * manager, bool visible))
    IL2CPP_REGISTER_METHOD(0x00AF9BA0, void, SetVisibleImmediate, (app::CleverMenuItemSelectionManager * manager, bool visible))
    IL2CPP_REGISTER_METHOD(0x00AF9BF0, void, StartExternalTimelines, (app::TitleScreenManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF9DF0, void, OnDisable, (app::TitleScreenManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF9E20, void, OnUserChanged, ())
    IL2CPP_REGISTER_METHOD(0x00AF9FD0, void, CheckForFirstTimeQualitySettings, (app::TitleScreenManager * this_ptr, bool immediate))
    IL2CPP_REGISTER_METHOD(0x00AFA0A0, app::IEnumerator*, WaitToShowFirstTimeQualitySettings, (app::TitleScreenManager * this_ptr, bool immediate))
    IL2CPP_REGISTER_METHOD(0x00AFA200, app::ITimelineEntity*, get_PrologueMaster, ())
    IL2CPP_REGISTER_METHOD(0x00AFA330, void, ctor, (app::TitleScreenManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFA490, void, cctor, ())
} // namespace app::classes::TitleScreenManager
