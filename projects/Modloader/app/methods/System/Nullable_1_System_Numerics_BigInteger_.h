#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_System_Numerics_BigInteger___Boxed.h>
#include <Modloader/app/structs/BigInteger_2.h>
#include <Modloader/app/structs/Nullable_1_System_Numerics_BigInteger_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_System_Numerics_BigInteger_ {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_System_Numerics_BigInteger___Boxed * this_ptr, app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_System_Numerics_BigInteger___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0020F2D0, app::BigInteger_2, get_Value, (app::Nullable_1_System_Numerics_BigInteger___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0020F3C0, bool, Equals_1, (app::Nullable_1_System_Numerics_BigInteger___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0020F410, bool, Equals_2, (app::Nullable_1_System_Numerics_BigInteger___Boxed * this_ptr, app::Nullable_1_System_Numerics_BigInteger_ other))
    IL2CPP_REGISTER_METHOD(0x0020F500, int32_t, GetHashCode, (app::Nullable_1_System_Numerics_BigInteger___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::BigInteger_2, GetValueOrDefault_1, (app::Nullable_1_System_Numerics_BigInteger___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::BigInteger_2, GetValueOrDefault_2, (app::Nullable_1_System_Numerics_BigInteger___Boxed * this_ptr, app::BigInteger_2 default_value))
    IL2CPP_REGISTER_METHOD(0x0020F580, app::String*, ToString, (app::Nullable_1_System_Numerics_BigInteger___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254E8A0, app::Object*, Box, (app::Nullable_1_System_Numerics_BigInteger_ o))
    IL2CPP_REGISTER_METHOD(0x0254E930, app::Nullable_1_System_Numerics_BigInteger_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_System_Numerics_BigInteger_
