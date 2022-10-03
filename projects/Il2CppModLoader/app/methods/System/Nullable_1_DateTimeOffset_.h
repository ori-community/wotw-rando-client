#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Nullable_1_DateTimeOffset_ {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_DateTimeOffset___Boxed * this_ptr, app::DateTimeOffset value))
    IL2CPP_REGISTER_METHODINFO(0x04754358, Nullable_1_DateTimeOffset___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_DateTimeOffset___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C710, Nullable_1_DateTimeOffset__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010A980, app::DateTimeOffset, GetValueOrDefault_1, (app::Nullable_1_DateTimeOffset___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474BAF0, Nullable_1_DateTimeOffset__GetValueOrDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F95D0, int32_t, GetHashCode, (app::Nullable_1_DateTimeOffset___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04721028, Nullable_1_DateTimeOffset__GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F93A0, app::DateTimeOffset, get_Value, (app::Nullable_1_DateTimeOffset___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780850, Nullable_1_DateTimeOffset__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F9490, bool, Equals_1, (app::Nullable_1_DateTimeOffset___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F94E0, bool, Equals_2, (app::Nullable_1_DateTimeOffset___Boxed * this_ptr, app::Nullable_1_DateTimeOffset_ other))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::DateTimeOffset, GetValueOrDefault_2, (app::Nullable_1_DateTimeOffset___Boxed * this_ptr, app::DateTimeOffset default_value))
    IL2CPP_REGISTER_METHOD(0x001F9640, app::String*, ToString, (app::Nullable_1_DateTimeOffset___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254E8A0, app::Object*, Box, (app::Nullable_1_DateTimeOffset_ o))
    IL2CPP_REGISTER_METHOD(0x0254E930, app::Nullable_1_DateTimeOffset_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_DateTimeOffset_
