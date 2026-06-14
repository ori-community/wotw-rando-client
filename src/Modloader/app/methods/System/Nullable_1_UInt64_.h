#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_UInt64_.h>
#include <Modloader/app/structs/Nullable_1_UInt64___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x001F8960, bool, get_HasValue, app::Nullable_1_UInt64___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C00, uint64_t, GetValueOrDefault_1, app::Nullable_1_UInt64___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, app::Nullable_1_UInt64___Boxed* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x002108E0, uint64_t, get_Value, app::Nullable_1_UInt64___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002109C0, bool, Equals_1, app::Nullable_1_UInt64___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x00210A10, bool, Equals_2, app::Nullable_1_UInt64___Boxed* this_ptr, app::Nullable_1_UInt64_ other)
    IL2CPP_REGISTER_METHOD(0x00210AE0, int32_t, GetHashCode, app::Nullable_1_UInt64___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020EBA0, uint64_t, GetValueOrDefault_2, app::Nullable_1_UInt64___Boxed* this_ptr, uint64_t default_value)
    IL2CPP_REGISTER_METHOD(0x00210B00, app::String*, ToString, app::Nullable_1_UInt64___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028899E0, app::Object*, Box, app::Nullable_1_UInt64_ o)
    IL2CPP_REGISTER_METHOD(0x02889A60, app::Nullable_1_UInt64_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_UInt64_
