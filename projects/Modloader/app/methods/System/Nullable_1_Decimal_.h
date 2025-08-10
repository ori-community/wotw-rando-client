#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Nullable_1_Decimal_.h>
#include <Modloader/app/structs/Nullable_1_Decimal___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Decimal_ {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, app::Nullable_1_Decimal___Boxed* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, app::Nullable_1_Decimal___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Decimal, GetValueOrDefault_1, app::Nullable_1_Decimal___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020D5C0, app::Decimal, get_Value, app::Nullable_1_Decimal___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020D6B0, bool, Equals_1, app::Nullable_1_Decimal___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0020D700, bool, Equals_2, app::Nullable_1_Decimal___Boxed* this_ptr, app::Nullable_1_Decimal_ other)
    IL2CPP_REGISTER_METHOD(0x0020D7F0, int32_t, GetHashCode, app::Nullable_1_Decimal___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::Decimal, GetValueOrDefault_2, app::Nullable_1_Decimal___Boxed* this_ptr, app::Decimal default_value)
    IL2CPP_REGISTER_METHOD(0x0020D860, app::String*, ToString, app::Nullable_1_Decimal___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0254F710, app::Object*, Box, app::Nullable_1_Decimal_ o)
    IL2CPP_REGISTER_METHOD(0x02888C40, app::Nullable_1_Decimal_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Decimal_
