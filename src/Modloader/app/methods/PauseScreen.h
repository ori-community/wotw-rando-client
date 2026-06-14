#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/PauseScreen.h>

namespace app::classes::PauseScreen {
    IL2CPP_REGISTER_METHOD(0x0044A9D0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MenuTabBackground__Enum, get_BackgroundMode, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044AA50, void, Awake, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044AB20, void, OnDestroy, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044AD20, void, OnBackPressed, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044AF50, void, Hide, app::PauseScreen* this_ptr, bool change)
    IL2CPP_REGISTER_METHOD(0x0044AF80, void, DeregisterCallbacks, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044B250, void, HideImmediate, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044B280, void, Show, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044B510, void, RegisterCallbacks, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044B7E0, void, ShowImmediate, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044B820, void, OnNavigate, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044B910, void, OnShow, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044BB40, void, OnPressed, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044BB70, void, OnPostTimeSlicedEnable, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044BC80, void, OnInstantiate, app::PauseScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PauseScreen* this_ptr)
} // namespace app::classes::PauseScreen
