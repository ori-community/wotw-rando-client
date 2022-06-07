#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BoolStateMap {
    IL2CPP_REGISTER_METHOD(0x01B55180, app::List_1_GenericMappingEntry_ *, GetGenericMapping, (app::BoolStateMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B554D0, void, SetGenericMapping, (app::BoolStateMap * this_ptr, int32_t state_guid, float generic_value))
    IL2CPP_REGISTER_METHOD(0x01B558E0, void, ctor, (app::BoolStateMap * this_ptr))
}
