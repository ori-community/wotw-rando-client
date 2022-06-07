#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::JitHelpers {
    IL2CPP_REGISTER_METHOD(0x0153B7A0, app::Object *, UnsafeCast, (app::Object * o))
    IL2CPP_REGISTER_METHOD(0x0153B7A0, int32_t, UnsafeEnumCast_1, (app::ByteEnum__Enum val))
    IL2CPP_REGISTER_METHOD(0x0153B7A0, int32_t, UnsafeEnumCast_2, (app::Int32Enum__Enum val))
    IL2CPP_REGISTER_METHOD(0x0153B7A0, int64_t, UnsafeEnumCastLong, (app::Int64Enum__Enum val))
}
