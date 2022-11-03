#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Nullable_1_TimeSpan_ {
    IL2CPP_REGISTER_METHOD(0x001F8960, bool, get_HasValue, (app::Nullable_1_TimeSpan___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766AE8, Nullable_1_TimeSpan__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00107C00, app::TimeSpan, GetValueOrDefault_1, (app::Nullable_1_TimeSpan___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471C2D8, Nullable_1_TimeSpan__GetValueOrDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00210220, int32_t, GetHashCode, (app::Nullable_1_TimeSpan___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E4A8, Nullable_1_TimeSpan__GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00210020, app::TimeSpan, get_Value, (app::Nullable_1_TimeSpan___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047958B8, Nullable_1_TimeSpan__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::Nullable_1_TimeSpan___Boxed * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHODINFO(0x04739620, Nullable_1_TimeSpan___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00210100, bool, Equals_1, (app::Nullable_1_TimeSpan___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00210150, bool, Equals_2, (app::Nullable_1_TimeSpan___Boxed * this_ptr, app::Nullable_1_TimeSpan_ other))
    IL2CPP_REGISTER_METHOD(0x001F8BF0, app::TimeSpan, GetValueOrDefault_2, (app::Nullable_1_TimeSpan___Boxed * this_ptr, app::TimeSpan default_value))
    IL2CPP_REGISTER_METHOD(0x00210240, app::String*, ToString, (app::Nullable_1_TimeSpan___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02551710, app::Object*, Box, (app::Nullable_1_TimeSpan_ o))
    IL2CPP_REGISTER_METHOD(0x02551790, app::Nullable_1_TimeSpan_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_TimeSpan_
