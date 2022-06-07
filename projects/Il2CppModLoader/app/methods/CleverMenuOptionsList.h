#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CleverMenuOptionsList {
    IL2CPP_REGISTER_METHOD(0x012BFF60, void, ClearItems, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C0110, void, SetSelection, (app::CleverMenuOptionsList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x012C0140, void, Awake, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C0310, void, OnDestroy, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C04F0, void, OnOptionPressed, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740A10, CleverMenuOptionsList_OnOptionPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012C0590, void, OnEnable, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C05A0, void, FixedUpdate, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C0C60, void, AddItem_1, (app::CleverMenuOptionsList * this_ptr, app::String * label, app::Action * on_pressed))
    IL2CPP_REGISTER_METHOD(0x012C1220, void, AddItem_2, (app::CleverMenuOptionsList * this_ptr, app::Language__Enum language, app::String * label, app::Action * on_pressed))
    IL2CPP_REGISTER_METHOD(0x012C17B0, void, ctor, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C1920, void, _FixedUpdate_b__17_0, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767588, CleverMenuOptionsList__FixedUpdate_b__17_0__MethodInfo)
}
