#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HideWhenMainMenuOpen {
    IL2CPP_REGISTER_METHOD(0x00B4AC90, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00B4AD60, void, OnMenuShow, ())
    IL2CPP_REGISTER_METHOD(0x00B4AEE0, void, OnMenuHide, ())
    IL2CPP_REGISTER_METHOD(0x00B4B060, void, Awake, (app::HideWhenMainMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B4B1F0, void, OnDestroy, (app::HideWhenMainMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B4B2D0, void, MakeVisible, (app::HideWhenMainMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B4B450, void, MakeInvisible, (app::HideWhenMainMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B4B5C0, bool, get_MainMenuVisible, (app::HideWhenMainMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HideWhenMainMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B4B650, void, cctor, ())
} // namespace app::classes::HideWhenMainMenuOpen
