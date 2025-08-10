#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControlScheme__Enum.h>
#include <Modloader/app/structs/ControllerSchemeOptions.h>

namespace app::classes::ControllerSchemeOptions {
    IL2CPP_REGISTER_METHOD(0x011F1170, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x011F11F0, void, Awake, app::ControllerSchemeOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011F1290, void, OnDestroy, app::ControllerSchemeOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011F1370, void, SetControlScheme, app::ControllerSchemeOptions* this_ptr, app::ControlScheme__Enum scheme)
    IL2CPP_REGISTER_METHOD(0x011F1470, void, Init, app::ControllerSchemeOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008578B0, void, ctor, app::ControllerSchemeOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011F1840, void, _Init_b__5_0, app::ControllerSchemeOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011F1850, void, _Init_b__5_1, app::ControllerSchemeOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011F1860, void, _Init_b__5_2, app::ControllerSchemeOptions* this_ptr)
} // namespace app::classes::ControllerSchemeOptions
