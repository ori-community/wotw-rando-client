#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleScreenPressStartLogic.h>

namespace app::classes::TitleScreenPressStartLogic {
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnEnable, app::TitleScreenPressStartLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AFACD0, void, FixedUpdate, app::TitleScreenPressStartLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AFB050, void, OnStartPressedCallback, app::TitleScreenPressStartLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TitleScreenPressStartLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::TitleScreenPressStartLogic
