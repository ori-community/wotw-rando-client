#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MessageBoxVisibility {
    IL2CPP_REGISTER_METHOD(0x015935D0, bool, get_Visible, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015935E0, void, Awake, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01593950, void, OnDestroy, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01593BF0, void, OnDisable, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01593C10, void, Recache, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791FC8, MessageBoxVisibility_Recache__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01593C50, void, Cache, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01593E80, void, Start, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01593ED0, app::Vector3, Flatten, (app::MessageBoxVisibility * this_ptr, app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x01593F00, void, Advance, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (app::MessageBoxVisibility * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0057A5A0, app::SuspendableMask__Enum, get_Mask, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01594350, void, set_Mask, (app::MessageBoxVisibility * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01594410, void, FixedUpdate, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01594430, void, ShowMessageScreen, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01594450, void, HideMessageScreen, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01594470, void, HideMessageScreenImmediately, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01594430, void, ResetWaitDuration_1, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01594580, void, ResetWaitDuration_2, (app::MessageBoxVisibility * this_ptr, float wait_duration))
    IL2CPP_REGISTER_METHOD(0x015945C0, void, HideImmediately, (app::MessageBoxVisibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015945F0, void, SetOpacity, (app::MessageBoxVisibility * this_ptr, float opacity))
    IL2CPP_REGISTER_METHOD(0x015948D0, void, ctor, (app::MessageBoxVisibility * this_ptr))
}
