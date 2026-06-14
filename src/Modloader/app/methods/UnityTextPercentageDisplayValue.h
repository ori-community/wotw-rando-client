#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityTextPercentageDisplayValue.h>

namespace app::classes::UnityTextPercentageDisplayValue {
    IL2CPP_REGISTER_METHOD(0x013AB210, void, Awake, app::UnityTextPercentageDisplayValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013AB2A0, void, FixedUpdate, app::UnityTextPercentageDisplayValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013AB3F0, void, ctor, app::UnityTextPercentageDisplayValue* this_ptr)
} // namespace app::classes::UnityTextPercentageDisplayValue
