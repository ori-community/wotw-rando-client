#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BigInteger_2__Boxed.h>
#include <Modloader/app/structs/BigInteger_2.h>
#include <Modloader/app/structs/BigInteger_GetBytesMode__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlySpan_1_Byte_.h>
#include <Modloader/app/structs/Span_1_Byte_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::System::Numerics::BigInteger {
    IL2CPP_REGISTER_METHOD(0x00246440, void, ctor_1, (app::BigInteger_2__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00246450, void, ctor_2, (app::BigInteger_2__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x00246460, void, ctor_3, (app::BigInteger_2__Boxed * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x00246470, void, ctor_4, (app::BigInteger_2__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x00246480, void, ctor_5, (app::BigInteger_2__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00246490, void, ctor_6, (app::BigInteger_2__Boxed * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x002464A0, void, ctor_7, (app::BigInteger_2__Boxed * this_ptr, app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x002464C0, void, ctor_8, (app::BigInteger_2__Boxed * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002464D0, void, ctor_9, (app::BigInteger_2__Boxed * this_ptr, app::ReadOnlySpan_1_Byte_ value))
    IL2CPP_REGISTER_METHOD(0x0013C010, void, ctor_10, (app::BigInteger_2__Boxed * this_ptr, int32_t n, app::UInt32__Array* rgu))
    IL2CPP_REGISTER_METHOD(0x00246500, void, ctor_11, (app::BigInteger_2__Boxed * this_ptr, app::UInt32__Array* value, bool negative))
    IL2CPP_REGISTER_METHOD(0x030FB600, app::BigInteger_2, get_Zero, ())
    IL2CPP_REGISTER_METHOD(0x00246510, bool, get_IsPowerOfTwo, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011D620, bool, get_IsZero, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002465A0, bool, get_IsOne, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002465C0, bool, get_IsEven, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00246600, int32_t, get_Sign, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030FB6B0, app::BigInteger_2, Parse_1, (app::String * value, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x030FB7A0, app::BigInteger_2, Parse_2, (app::String * value, app::NumberStyles__Enum style, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00246610, int32_t, GetHashCode, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00246670, bool, Equals_1, (app::BigInteger_2__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x00246680, bool, Equals_2, (app::BigInteger_2__Boxed * this_ptr, int64_t other))
    IL2CPP_REGISTER_METHOD(0x00246690, bool, Equals_3, (app::BigInteger_2__Boxed * this_ptr, app::BigInteger_2 other))
    IL2CPP_REGISTER_METHOD(0x002466B0, int32_t, CompareTo_1, (app::BigInteger_2__Boxed * this_ptr, int64_t other))
    IL2CPP_REGISTER_METHOD(0x002466C0, int32_t, CompareTo_2, (app::BigInteger_2__Boxed * this_ptr, app::BigInteger_2 other))
    IL2CPP_REGISTER_METHOD(0x002466E0, int32_t, CompareTo_3, (app::BigInteger_2__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x00246800, app::Byte__Array*, ToByteArray, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00246850, int32_t, GetByteCount, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002468B0, app::Byte__Array*, TryGetBytes, (app::BigInteger_2__Boxed * this_ptr, app::BigInteger_GetBytesMode__Enum mode, app::Span_1_Byte_ destination, int32_t* bytes_written))
    IL2CPP_REGISTER_METHOD(0x002468E0, app::UInt32__Array*, ToUInt32Array, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002468F0, app::String*, ToString_1, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00246930, app::String*, ToString_2, (app::BigInteger_2__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00246970, app::String*, ToString_3, (app::BigInteger_2__Boxed * this_ptr, app::String* format, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x030FC5D0, app::BigInteger_2, Add, (app::UInt32__Array * left_bits, int32_t left_sign, app::UInt32__Array* right_bits, int32_t right_sign))
    IL2CPP_REGISTER_METHOD(0x030FC7C0, app::BigInteger_2, op_Subtraction, (app::BigInteger_2 left, app::BigInteger_2 right))
    IL2CPP_REGISTER_METHOD(0x030FC930, app::BigInteger_2, Subtract, (app::UInt32__Array * left_bits, int32_t left_sign, app::UInt32__Array* right_bits, int32_t right_sign))
    IL2CPP_REGISTER_METHOD(0x030FCC00, app::BigInteger_2, op_Implicit_1, (uint8_t value))
    IL2CPP_REGISTER_METHOD(0x030FCC30, app::BigInteger_2, op_Implicit_2, (int8_t value))
    IL2CPP_REGISTER_METHOD(0x030FCC60, app::BigInteger_2, op_Implicit_3, (int16_t value))
    IL2CPP_REGISTER_METHOD(0x030FCC90, app::BigInteger_2, op_Implicit_4, (uint16_t value))
    IL2CPP_REGISTER_METHOD(0x030FCCC0, app::BigInteger_2, op_Implicit_5, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x030FCCE0, app::BigInteger_2, op_Implicit_6, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x030FCD00, app::BigInteger_2, op_Implicit_7, (int64_t value))
    IL2CPP_REGISTER_METHOD(0x030FCD20, app::BigInteger_2, op_Implicit_8, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x030FCD40, uint8_t, op_Explicit_1, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FCE00, int8_t, op_Explicit_2, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FCEC0, int16_t, op_Explicit_3, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FCF80, uint16_t, op_Explicit_4, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FD040, int32_t, op_Explicit_5, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FD220, uint32_t, op_Explicit_6, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FD340, int64_t, op_Explicit_7, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FD520, uint64_t, op_Explicit_8, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FD6C0, float, op_Explicit_9, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FD770, double, op_Explicit_10, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FD8C0, app::Decimal, op_Explicit_11, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FDB60, app::BigInteger_2, op_UnaryNegation, (app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x030FDB90, app::BigInteger_2, op_Addition, (app::BigInteger_2 left, app::BigInteger_2 right))
    IL2CPP_REGISTER_METHOD(0x030FDD00, app::BigInteger_2, op_Multiply, (app::BigInteger_2 left, app::BigInteger_2 right))
    IL2CPP_REGISTER_METHOD(0x030FE000, bool, op_LessThanOrEqual_1, (app::BigInteger_2 left, app::BigInteger_2 right))
    IL2CPP_REGISTER_METHOD(0x030FE020, bool, op_Inequality_1, (app::BigInteger_2 left, app::BigInteger_2 right))
    IL2CPP_REGISTER_METHOD(0x030FE040, bool, op_LessThan_1, (app::BigInteger_2 left, int64_t right))
    IL2CPP_REGISTER_METHOD(0x030FE060, bool, op_LessThanOrEqual_2, (app::BigInteger_2 left, int64_t right))
    IL2CPP_REGISTER_METHOD(0x030FE080, bool, op_Equality, (app::BigInteger_2 left, int64_t right))
    IL2CPP_REGISTER_METHOD(0x030FE090, bool, op_Inequality_2, (app::BigInteger_2 left, int64_t right))
    IL2CPP_REGISTER_METHOD(0x030FE0B0, bool, op_LessThan_2, (int64_t left, app::BigInteger_2 right))
    IL2CPP_REGISTER_METHOD(0x030FE0D0, bool, op_LessThanOrEqual_3, (int64_t left, app::BigInteger_2 right))
    IL2CPP_REGISTER_METHOD(0x030FE0F0, int32_t, GetDiffLength, (app::UInt32__Array * rgu1, app::UInt32__Array* rgu2, int32_t cu))
    IL2CPP_REGISTER_METHOD(0x00002890, void, AssertValid, (app::BigInteger_2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030FE160, void, cctor, ())
    inline app::BigInteger_2 operator-(app::BigInteger_2 left, app::BigInteger_2 right) {
        return op_Subtraction(left, right);
    }
    inline app::BigInteger_2 operator-(app::BigInteger_2 value) {
        return op_UnaryNegation(value);
    }
    inline app::BigInteger_2 operator+(app::BigInteger_2 left, app::BigInteger_2 right) {
        return op_Addition(left, right);
    }
    inline app::BigInteger_2 operator*(app::BigInteger_2 left, app::BigInteger_2 right) {
        return op_Multiply(left, right);
    }
    inline bool operator<=(app::BigInteger_2 left, app::BigInteger_2 right) {
        return op_LessThanOrEqual_1(left, right);
    }
    inline bool operator!=(app::BigInteger_2 left, app::BigInteger_2 right) {
        return op_Inequality_1(left, right);
    }
    inline bool operator<(app::BigInteger_2 left, int64_t right) {
        return op_LessThan_1(left, right);
    }
    inline bool operator<=(app::BigInteger_2 left, int64_t right) {
        return op_LessThanOrEqual_2(left, right);
    }
    inline bool operator==(app::BigInteger_2 left, int64_t right) {
        return op_Equality(left, right);
    }
    inline bool operator!=(app::BigInteger_2 left, int64_t right) {
        return op_Inequality_2(left, right);
    }
    inline bool operator<(int64_t left, app::BigInteger_2 right) {
        return op_LessThan_2(left, right);
    }
    inline bool operator<=(int64_t left, app::BigInteger_2 right) {
        return op_LessThanOrEqual_3(left, right);
    }
} // namespace app::classes::System::Numerics::BigInteger
