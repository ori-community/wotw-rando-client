#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageBoxMessageScreen.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::MessageBoxMessageScreen {
    IL2CPP_REGISTER_METHOD(0x01592840, bool, get_Visible, app::MessageBoxMessageScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01592850, void, Awake, app::MessageBoxMessageScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01592AA0, void, Start, app::MessageBoxMessageScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, app::MessageBoxMessageScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsSuspended, app::MessageBoxMessageScreen* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01592AD0, void, FixedUpdate, app::MessageBoxMessageScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01592F10, void, ShowMessageScreen, app::MessageBoxMessageScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01592F30, void, HideMessageScreen, app::MessageBoxMessageScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01592F50, void, ResetWaitDuration_1, app::MessageBoxMessageScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01592F60, void, ResetWaitDuration_2, app::MessageBoxMessageScreen* this_ptr, float wait_duration)
    IL2CPP_REGISTER_METHOD(0x01592F80, void, HideImmediately, app::MessageBoxMessageScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01592FB0, void, SetOpacity, app::MessageBoxMessageScreen* this_ptr, float opacity)
    IL2CPP_REGISTER_METHOD(0x01593410, void, SetTexture, app::MessageBoxMessageScreen* this_ptr, app::Texture2D* texture)
    IL2CPP_REGISTER_METHOD(0x015935B0, void, ctor, app::MessageBoxMessageScreen* this_ptr)
} // namespace app::classes::MessageBoxMessageScreen
