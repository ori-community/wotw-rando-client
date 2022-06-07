#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Nullable_1_Moon_JsonParser_Object_ {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_Moon_JsonParser_Object___Boxed * this_ptr, app::JsonParser_Object value))
    IL2CPP_REGISTER_METHODINFO(0x0472DAF0, Nullable_1_Moon_JsonParser_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_Moon_JsonParser_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C070, Nullable_1_Moon_JsonParser_Object__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F4DB0, app::JsonParser_Object, get_Value, (app::Nullable_1_Moon_JsonParser_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04788E70, Nullable_1_Moon_JsonParser_Object__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F4EA0, bool, Equals_1, (app::Nullable_1_Moon_JsonParser_Object___Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x001F48A0, bool, Equals_2, (app::Nullable_1_Moon_JsonParser_Object___Boxed * this_ptr, app::Nullable_1_Moon_JsonParser_Object_ other))
    IL2CPP_REGISTER_METHOD(0x001F4900, int32_t, GetHashCode, (app::Nullable_1_Moon_JsonParser_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::JsonParser_Object, GetValueOrDefault_1, (app::Nullable_1_Moon_JsonParser_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::JsonParser_Object, GetValueOrDefault_2, (app::Nullable_1_Moon_JsonParser_Object___Boxed * this_ptr, app::JsonParser_Object default_value))
    IL2CPP_REGISTER_METHOD(0x001F4EF0, app::String *, ToString, (app::Nullable_1_Moon_JsonParser_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254E8A0, app::Object *, Box, (app::Nullable_1_Moon_JsonParser_Object_ o))
    IL2CPP_REGISTER_METHOD(0x0254E930, app::Nullable_1_Moon_JsonParser_Object_, Unbox, (app::Object * o))
}
