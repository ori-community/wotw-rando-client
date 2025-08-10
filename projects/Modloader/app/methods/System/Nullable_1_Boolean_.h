#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Boolean___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x001F7750, bool, get_HasValue, app::Nullable_1_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010DB70, void, ctor, app::Nullable_1_Boolean___Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x001F8050, bool, get_Value, app::Nullable_1_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010E100, bool, GetValueOrDefault_1, app::Nullable_1_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F8130, bool, Equals_1, app::Nullable_1_Boolean___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x001F8180, bool, Equals_2, app::Nullable_1_Boolean___Boxed* this_ptr, app::Nullable_1_Boolean_ other)
    IL2CPP_REGISTER_METHOD(0x001F8240, int32_t, GetHashCode, app::Nullable_1_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F8260, bool, GetValueOrDefault_2, app::Nullable_1_Boolean___Boxed* this_ptr, bool default_value)
    IL2CPP_REGISTER_METHOD(0x001F8280, app::String*, ToString, app::Nullable_1_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02550A60, app::Object*, Box, app::Nullable_1_Boolean_ o)
    IL2CPP_REGISTER_METHOD(0x02551050, app::Nullable_1_Boolean_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Boolean_
