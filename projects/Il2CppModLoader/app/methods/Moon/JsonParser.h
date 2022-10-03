#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::JsonParser {
    IL2CPP_REGISTER_METHOD(0x030EB650, int32_t, get_Capacity, (app::JsonParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EDB40, void, ctor, (app::JsonParser * this_ptr, app::String* json))
    IL2CPP_REGISTER_METHOD(0x030EDE50, void, Reset, (app::JsonParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EE0B0, void, Reuse, (app::JsonParser * this_ptr, app::String* json))
    IL2CPP_REGISTER_METHOD(0x030EE0E0, app::JsonParser_Slot, RootSlot, (app::JsonParser * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704CD0, JsonParser_RootSlot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030EE1B0, app::JsonToken__Enum, NextTokenWithoutAdvancing, (app::JsonParser * this_ptr, double* number, app::Substr* remainder))
    IL2CPP_REGISTER_METHODINFO(0x0471AFD8, JsonParser_NextTokenWithoutAdvancing__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030EE290, app::JsonToken__Enum, NextToken, (app::JsonParser * this_ptr, double* number))
    IL2CPP_REGISTER_METHOD(0x030EE2C0, void, PushScope, (app::JsonParser * this_ptr, int32_t ident))
    IL2CPP_REGISTER_METHOD(0x030EE3C0, void, PopScope, (app::JsonParser * this_ptr, int32_t ident))
    IL2CPP_REGISTER_METHODINFO(0x04773EF8, JsonParser_PopScope__MethodInfo)
} // namespace app::classes::Moon::JsonParser
