#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Nullable_1_SByte_ {
    IL2CPP_REGISTER_METHOD(0x001F7750, bool, get_HasValue, (app::Nullable_1_SByte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04730BD8, Nullable_1_SByte__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010E100, int8_t, GetValueOrDefault_1, (app::Nullable_1_SByte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471A550, Nullable_1_SByte__GetValueOrDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010DB70, void, ctor, (app::Nullable_1_SByte___Boxed * this_ptr, int8_t value))
    IL2CPP_REGISTER_METHODINFO(0x0470B1C8, Nullable_1_SByte___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0020FA10, int8_t, get_Value, (app::Nullable_1_SByte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771DB8, Nullable_1_SByte__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0020FAF0, bool, Equals_1, (app::Nullable_1_SByte___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0020FB40, bool, Equals_2, (app::Nullable_1_SByte___Boxed * this_ptr, app::Nullable_1_SByte_ other))
    IL2CPP_REGISTER_METHOD(0x0020FC00, int32_t, GetHashCode, (app::Nullable_1_SByte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F8260, int8_t, GetValueOrDefault_2, (app::Nullable_1_SByte___Boxed * this_ptr, int8_t default_value))
    IL2CPP_REGISTER_METHOD(0x0020FC20, app::String*, ToString, (app::Nullable_1_SByte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02550A60, app::Object*, Box, (app::Nullable_1_SByte_ o))
    IL2CPP_REGISTER_METHOD(0x02551050, app::Nullable_1_SByte_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_SByte_
