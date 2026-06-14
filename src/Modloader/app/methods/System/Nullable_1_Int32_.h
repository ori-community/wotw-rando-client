#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Int32___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Int32_ {
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, app::Nullable_1_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020E300, int32_t, get_Value, app::Nullable_1_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, app::Nullable_1_Int32___Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetValueOrDefault_1, app::Nullable_1_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020E3E0, bool, Equals_1, app::Nullable_1_Int32___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0020E430, bool, Equals_2, app::Nullable_1_Int32___Boxed* this_ptr, app::Nullable_1_Int32_ other)
    IL2CPP_REGISTER_METHOD(0x001F6290, int32_t, GetHashCode, app::Nullable_1_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020E4F0, int32_t, GetValueOrDefault_2, app::Nullable_1_Int32___Boxed* this_ptr, int32_t default_value)
    IL2CPP_REGISTER_METHOD(0x0020E510, app::String*, ToString, app::Nullable_1_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0254FA50, app::Object*, Box, app::Nullable_1_Int32_ o)
    IL2CPP_REGISTER_METHOD(0x02889570, app::Nullable_1_Int32_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Int32_
