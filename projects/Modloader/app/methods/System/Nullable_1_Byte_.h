#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Byte___Boxed.h>
#include <Modloader/app/structs/Nullable_1_Byte_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Byte_ {
    IL2CPP_REGISTER_METHOD(0x001F7750, bool, get_HasValue, (app::Nullable_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010E100, uint8_t, GetValueOrDefault_1, (app::Nullable_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB70, void, ctor, (app::Nullable_1_Byte___Boxed * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x001F8350, uint8_t, get_Value, (app::Nullable_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F8430, bool, Equals_1, (app::Nullable_1_Byte___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F8480, bool, Equals_2, (app::Nullable_1_Byte___Boxed * this_ptr, app::Nullable_1_Byte_ other))
    IL2CPP_REGISTER_METHOD(0x001F8540, int32_t, GetHashCode, (app::Nullable_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F8260, uint8_t, GetValueOrDefault_2, (app::Nullable_1_Byte___Boxed * this_ptr, uint8_t default_value))
    IL2CPP_REGISTER_METHOD(0x001F8570, app::String*, ToString, (app::Nullable_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02550A60, app::Object*, Box, (app::Nullable_1_Byte_ o))
    IL2CPP_REGISTER_METHOD(0x02551050, app::Nullable_1_Byte_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_Byte_
