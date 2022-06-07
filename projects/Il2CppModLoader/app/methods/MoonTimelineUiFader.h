#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonTimelineUiFader {
    IL2CPP_REGISTER_METHOD(0x01473C40, bool, get_IsPlaying, (app::MoonTimelineUiFader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01473C80, bool, get_IsFadingOut, (app::MoonTimelineUiFader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013163D0, bool, get_IsFadingIn, (app::MoonTimelineUiFader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01473CA0, void, FadeIn, (app::MoonTimelineUiFader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01473E60, void, FadeOut, (app::MoonTimelineUiFader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01473EE0, void, FadeInImmediate, (app::MoonTimelineUiFader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01473F40, void, FadeOutImmediate, (app::MoonTimelineUiFader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01473FA0, void, Stop, (app::MoonTimelineUiFader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01473FE0, void, DisableAndEnableNextFrame, (app::MoonTimelineUiFader * this_ptr, app::GameObject * target))
    IL2CPP_REGISTER_METHOD(0x01474110, void, EnableAndDisableNextFrame, (app::MoonTimelineUiFader * this_ptr, app::GameObject * target))
    IL2CPP_REGISTER_METHOD(0x01474240, void, ctor, (app::MoonTimelineUiFader * this_ptr))
}
