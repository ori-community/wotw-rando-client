#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Nullable_1_Single___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Single_ {
    IL2CPP_REGISTER_METHOD(0x0010FDD0, float, GetValueOrDefault_1, app::Nullable_1_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, app::Nullable_1_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114F30, void, ctor, app::Nullable_1_Single___Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0020FD00, float, get_Value, app::Nullable_1_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020FDE0, bool, Equals_1, app::Nullable_1_Single___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0020FE30, bool, Equals_2, app::Nullable_1_Single___Boxed* this_ptr, app::Nullable_1_Single_ other)
    IL2CPP_REGISTER_METHOD(0x0020FF00, int32_t, GetHashCode, app::Nullable_1_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020FF30, float, GetValueOrDefault_2, app::Nullable_1_Single___Boxed* this_ptr, float default_value)
    IL2CPP_REGISTER_METHOD(0x0020FF50, app::String*, ToString, app::Nullable_1_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0288A410, app::Object*, Box, app::Nullable_1_Single_ o)
    IL2CPP_REGISTER_METHOD(0x0288A490, app::Nullable_1_Single_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Single_
