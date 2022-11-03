#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Nullable_1_Int64_ {
    IL2CPP_REGISTER_METHOD(0x00107C00, int64_t, GetValueOrDefault_1, (app::Nullable_1_Int64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478F3D0, Nullable_1_Int64__GetValueOrDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F8960, bool, get_HasValue, (app::Nullable_1_Int64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475F618, Nullable_1_Int64__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0020EB80, int32_t, GetHashCode, (app::Nullable_1_Int64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470AD30, Nullable_1_Int64__GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::Nullable_1_Int64___Boxed * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x04723AD8, Nullable_1_Int64___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0020E980, int64_t, get_Value, (app::Nullable_1_Int64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706AF0, Nullable_1_Int64__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0020EA60, bool, Equals_1, (app::Nullable_1_Int64___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0020EAB0, bool, Equals_2, (app::Nullable_1_Int64___Boxed * this_ptr, app::Nullable_1_Int64_ other))
    IL2CPP_REGISTER_METHOD(0x0020EBA0, int64_t, GetValueOrDefault_2, (app::Nullable_1_Int64___Boxed * this_ptr, int64_t default_value))
    IL2CPP_REGISTER_METHOD(0x0020EBC0, app::String*, ToString, (app::Nullable_1_Int64___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028899E0, app::Object*, Box, (app::Nullable_1_Int64_ o))
    IL2CPP_REGISTER_METHOD(0x02889A60, app::Nullable_1_Int64_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_Int64_
