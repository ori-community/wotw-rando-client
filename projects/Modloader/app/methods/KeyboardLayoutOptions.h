#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KeyboardLayoutOptions {
    IL2CPP_REGISTER_METHOD(0x00E6BF30, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00E6BFB0, void, Awake, (app::KeyboardLayoutOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E6C040, void, OnDestroy, (app::KeyboardLayoutOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E6C120, void, SetKeyboardLayout, (app::KeyboardLayoutOptions * this_ptr, app::KeyboardLayout__Enum scheme))
    IL2CPP_REGISTER_METHOD(0x00E6C1E0, void, OnEnable, (app::KeyboardLayoutOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008578B0, void, ctor, (app::KeyboardLayoutOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E6C4A0, void, _OnEnable_b__5_0, (app::KeyboardLayoutOptions * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047519C8, KeyboardLayoutOptions__OnEnable_b__5_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E6C540, void, _OnEnable_b__5_1, (app::KeyboardLayoutOptions * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478E350, KeyboardLayoutOptions__OnEnable_b__5_1__MethodInfo)
} // namespace app::classes::KeyboardLayoutOptions
