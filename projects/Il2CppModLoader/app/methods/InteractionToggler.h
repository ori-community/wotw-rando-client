#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::InteractionToggler {
    IL2CPP_REGISTER_METHOD(0x0063B910, app::String*, get_Path, (app::InteractionToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063B990, app::String*, get_Name, (app::InteractionToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063BA10, app::String*, get_HelpText, (app::InteractionToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::InteractionToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063BA90, app::String__Array*, get_ToggleOptions, (app::InteractionToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062A6B0, int32_t, get_CurrentToggleOptionId, (app::InteractionToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063BBD0, void, set_CurrentToggleOptionId, (app::InteractionToggler * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::InteractionToggler * this_ptr))
} // namespace app::classes::InteractionToggler
