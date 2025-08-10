#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Char_.h>
#include <Modloader/app/structs/Nullable_1_Char___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Char_ {
    IL2CPP_REGISTER_METHOD(0x001F8650, bool, get_HasValue, app::Nullable_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CC0, char16_t, GetValueOrDefault_1, app::Nullable_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CD0, void, ctor, app::Nullable_1_Char___Boxed* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x001F8660, char16_t, get_Value, app::Nullable_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F8740, bool, Equals_1, app::Nullable_1_Char___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x001F8790, bool, Equals_2, app::Nullable_1_Char___Boxed* this_ptr, app::Nullable_1_Char_ other)
    IL2CPP_REGISTER_METHOD(0x001F8850, int32_t, GetHashCode, app::Nullable_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F8870, char16_t, GetValueOrDefault_2, app::Nullable_1_Char___Boxed* this_ptr, char16_t default_value)
    IL2CPP_REGISTER_METHOD(0x001F8890, app::String*, ToString, app::Nullable_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025514A0, app::Object*, Box, app::Nullable_1_Char_ o)
    IL2CPP_REGISTER_METHOD(0x02551510, app::Nullable_1_Char_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Char_
