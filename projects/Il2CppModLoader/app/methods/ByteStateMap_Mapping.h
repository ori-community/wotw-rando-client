#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ByteStateMap_Mapping {
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Index, (app::ByteStateMap_Mapping__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Index, (app::ByteStateMap_Mapping__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001C01C0, bool, Matches, (app::ByteStateMap_Mapping__Boxed * this_ptr, app::IUberState * state))
}
