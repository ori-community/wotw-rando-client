#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Int16_.h>
#include <Modloader/app/structs/Nullable_1_Int16___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Int16_ {
    IL2CPP_REGISTER_METHOD(0x001F8650, bool, get_HasValue, app::Nullable_1_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CC0, int16_t, GetValueOrDefault_1, app::Nullable_1_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CD0, void, ctor, app::Nullable_1_Int16___Boxed* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x0020E010, int16_t, get_Value, app::Nullable_1_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020E0F0, bool, Equals_1, app::Nullable_1_Int16___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0020E140, bool, Equals_2, app::Nullable_1_Int16___Boxed* this_ptr, app::Nullable_1_Int16_ other)
    IL2CPP_REGISTER_METHOD(0x0020E200, int32_t, GetHashCode, app::Nullable_1_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F8870, int16_t, GetValueOrDefault_2, app::Nullable_1_Int16___Boxed* this_ptr, int16_t default_value)
    IL2CPP_REGISTER_METHOD(0x0020E220, app::String*, ToString, app::Nullable_1_Int16___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025514A0, app::Object*, Box, app::Nullable_1_Int16_ o)
    IL2CPP_REGISTER_METHOD(0x02551510, app::Nullable_1_Int16_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Int16_
