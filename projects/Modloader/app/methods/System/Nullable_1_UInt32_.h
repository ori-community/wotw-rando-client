#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/Nullable_1_UInt32___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, app::Nullable_1_UInt32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010E170, uint32_t, GetValueOrDefault_1, app::Nullable_1_UInt32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, app::Nullable_1_UInt32___Boxed* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x00210610, uint32_t, get_Value, app::Nullable_1_UInt32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002106F0, bool, Equals_1, app::Nullable_1_UInt32___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x00210740, bool, Equals_2, app::Nullable_1_UInt32___Boxed* this_ptr, app::Nullable_1_UInt32_ other)
    IL2CPP_REGISTER_METHOD(0x001F6290, int32_t, GetHashCode, app::Nullable_1_UInt32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020E4F0, uint32_t, GetValueOrDefault_2, app::Nullable_1_UInt32___Boxed* this_ptr, uint32_t default_value)
    IL2CPP_REGISTER_METHOD(0x00210800, app::String*, ToString, app::Nullable_1_UInt32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0254FA50, app::Object*, Box, app::Nullable_1_UInt32_ o)
    IL2CPP_REGISTER_METHOD(0x02889570, app::Nullable_1_UInt32_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_UInt32_
