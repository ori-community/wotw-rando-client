#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RacePauseScreen {
    IL2CPP_REGISTER_METHOD(0x007118D0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MenuTabBackground__Enum, get_BackgroundMode, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711950, void, Awake, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711A20, void, OnDestroy, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711C20, void, OnBackPressed, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A6A8, RacePauseScreen_OnBackPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0063F120, void, Hide, (app::RacePauseScreen * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x0063F190, void, HideImmediate, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711CD0, void, Show, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711D10, void, ShowImmediate, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711D50, void, OnShow, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711DD0, void, OnPostTimeSlicedEnable, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711EE0, void, OnInstantiate, (app::RacePauseScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RacePauseScreen * this_ptr))
} // namespace app::classes::RacePauseScreen
