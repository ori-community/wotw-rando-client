#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BoolStateMap_Mapping {
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Index, (app::BoolStateMap_Mapping__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Index, (app::BoolStateMap_Mapping__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0011DC50, bool, get_Value, (app::BoolStateMap_Mapping__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001C01A0, void, set_Value, (app::BoolStateMap_Mapping__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x001C01B0, bool, Matches, (app::BoolStateMap_Mapping__Boxed * this_ptr, app::IUberState* state))
} // namespace app::classes::BoolStateMap_Mapping
