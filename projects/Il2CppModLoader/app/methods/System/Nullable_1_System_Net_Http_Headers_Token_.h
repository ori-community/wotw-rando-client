#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Nullable_1_System_Net_Http_Headers_Token_ {
    IL2CPP_REGISTER_METHOD(0x001F6D10, bool, get_HasValue, (app::Nullable_1_System_Net_Http_Headers_Token___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04714EB8, Nullable_1_System_Net_Http_Headers_Token__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0020F080, app::Token, get_Value, (app::Nullable_1_System_Net_Http_Headers_Token___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BCB8, Nullable_1_System_Net_Http_Headers_Token__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001EB610, void, ctor, (app::Nullable_1_System_Net_Http_Headers_Token___Boxed * this_ptr, app::Token value))
    IL2CPP_REGISTER_METHODINFO(0x04712038, Nullable_1_System_Net_Http_Headers_Token___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0020F180, bool, Equals_1, (app::Nullable_1_System_Net_Http_Headers_Token___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F6E80, bool, Equals_2, (app::Nullable_1_System_Net_Http_Headers_Token___Boxed * this_ptr, app::Nullable_1_System_Net_Http_Headers_Token_ other))
    IL2CPP_REGISTER_METHOD(0x001F6EF0, int32_t, GetHashCode, (app::Nullable_1_System_Net_Http_Headers_Token___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F6FC0, app::Token, GetValueOrDefault_1, (app::Nullable_1_System_Net_Http_Headers_Token___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F6FE0, app::Token, GetValueOrDefault_2, (app::Nullable_1_System_Net_Http_Headers_Token___Boxed * this_ptr, app::Token default_value))
    IL2CPP_REGISTER_METHOD(0x0020F1E0, app::String*, ToString, (app::Nullable_1_System_Net_Http_Headers_Token___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025502C0, app::Object*, Box, (app::Nullable_1_System_Net_Http_Headers_Token_ o))
    IL2CPP_REGISTER_METHOD(0x02550350, app::Nullable_1_System_Net_Http_Headers_Token_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_System_Net_Http_Headers_Token_
