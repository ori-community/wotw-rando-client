#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityTextStringDisplayValue.h>

namespace app::classes::UnityTextStringDisplayValue {
    IL2CPP_REGISTER_METHOD(0x013AB540, void, Awake, (app::UnityTextStringDisplayValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AB5E0, void, OnEnable, (app::UnityTextStringDisplayValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AB730, void, FixedUpdate, (app::UnityTextStringDisplayValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AB8D0, void, ctor, (app::UnityTextStringDisplayValue * this_ptr))
} // namespace app::classes::UnityTextStringDisplayValue
