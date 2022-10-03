#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ControlListOptions {
    IL2CPP_REGISTER_METHOD(0x011EEE00, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x011EEE80, void, Awake, (app::ControlListOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EF050, void, OnDestroy, (app::ControlListOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EF130, void, SetAndClose, (app::ControlListOptions * this_ptr, app::ControlsScreen_ControlListEnum__Enum set))
    IL2CPP_REGISTER_METHOD(0x011EF2A0, void, SetControlList, (app::ControlListOptions * this_ptr, app::ControlsScreen_ControlListEnum__Enum list))
    IL2CPP_REGISTER_METHOD(0x011EF360, void, Init, (app::ControlListOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008578B0, void, ctor, (app::ControlListOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EF790, void, _Init_b__6_0, (app::ControlListOptions * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D438, ControlListOptions__Init_b__6_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011EF7A0, void, _Init_b__6_1, (app::ControlListOptions * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F770, ControlListOptions__Init_b__6_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011EF7B0, void, _Init_b__6_2, (app::ControlListOptions * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475BBE0, ControlListOptions__Init_b__6_2__MethodInfo)
} // namespace app::classes::ControlListOptions
