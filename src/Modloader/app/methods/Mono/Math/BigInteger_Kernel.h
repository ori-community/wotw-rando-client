#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BigInteger.h>
#include <Modloader/app/structs/BigInteger_1.h>
#include <Modloader/app/structs/BigInteger_1__Array.h>
#include <Modloader/app/structs/BigInteger_Sign__Enum.h>
#include <Modloader/app/structs/BigInteger_Sign__Enum_1.h>
#include <Modloader/app/structs/BigInteger__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::Mono::Math::BigInteger_Kernel {
    IL2CPP_REGISTER_METHOD(0x023C8C80, app::BigInteger*, AddSameSign_1, app::BigInteger* bi1, app::BigInteger* bi2)
    IL2CPP_REGISTER_METHOD(0x023C9050, app::BigInteger*, Subtract_1, app::BigInteger* big, app::BigInteger* small)
    IL2CPP_REGISTER_METHOD(0x023C93F0, void, MinusEq_1, app::BigInteger* big, app::BigInteger* small)
    IL2CPP_REGISTER_METHOD(0x023C9590, void, PlusEq_1, app::BigInteger* bi1, app::BigInteger* bi2)
    IL2CPP_REGISTER_METHOD(0x023C9840, app::BigInteger_Sign__Enum, Compare_1, app::BigInteger* bi1, app::BigInteger* bi2)
    IL2CPP_REGISTER_METHOD(0x023C9A40, uint32_t, SingleByteDivideInPlace_1, app::BigInteger* n, uint32_t d)
    IL2CPP_REGISTER_METHOD(0x023C6480, uint32_t, DwordMod_1, app::BigInteger* n, uint32_t d)
    IL2CPP_REGISTER_METHOD(0x023C9B40, app::BigInteger__Array*, DwordDivMod_1, app::BigInteger* n, uint32_t d)
    IL2CPP_REGISTER_METHOD(0x023C9EA0, app::BigInteger__Array*, multiByteDivide_1, app::BigInteger* bi1, app::BigInteger* bi2)
    IL2CPP_REGISTER_METHOD(0x023CA9A0, app::BigInteger*, LeftShift_1, app::BigInteger* bi, int32_t n)
    IL2CPP_REGISTER_METHOD(0x023CAEA0, app::BigInteger*, RightShift_1, app::BigInteger* bi, int32_t n)
    IL2CPP_REGISTER_METHOD(0x023CB260, app::BigInteger*, MultiplyByDword, app::BigInteger* n, uint32_t f)
    IL2CPP_REGISTER_METHOD(
        0x023CB4F0,
        void,
        Multiply_1,
        app::UInt32__Array* x,
        uint32_t x_offset,
        uint32_t x_len,
        app::UInt32__Array* y,
        uint32_t y_offset,
        uint32_t y_len,
        app::UInt32__Array* d,
        uint32_t d_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x023CB640,
        void,
        MultiplyMod2p32pmod_1,
        app::UInt32__Array* x,
        int32_t x_offset,
        int32_t x_len,
        app::UInt32__Array* y,
        int32_t y_offest,
        int32_t y_len,
        app::UInt32__Array* d,
        int32_t d_offset,
        int32_t mod
    )
    IL2CPP_REGISTER_METHOD(0x023CB780, uint32_t, modInverse_1, app::BigInteger* bi, uint32_t modulus)
    IL2CPP_REGISTER_METHOD(0x023CB880, app::BigInteger*, modInverse_2, app::BigInteger* bi, app::BigInteger* modulus)
    IL2CPP_REGISTER_METHOD(0x02A31B40, app::BigInteger_1*, AddSameSign_2, app::BigInteger_1* bi1, app::BigInteger_1* bi2)
    IL2CPP_REGISTER_METHOD(0x02A31F10, app::BigInteger_1*, Subtract_2, app::BigInteger_1* big, app::BigInteger_1* small)
    IL2CPP_REGISTER_METHOD(0x023C93F0, void, MinusEq_2, app::BigInteger_1* big, app::BigInteger_1* small)
    IL2CPP_REGISTER_METHOD(0x023C9590, void, PlusEq_2, app::BigInteger_1* bi1, app::BigInteger_1* bi2)
    IL2CPP_REGISTER_METHOD(0x023C9840, app::BigInteger_Sign__Enum_1, Compare_2, app::BigInteger_1* bi1, app::BigInteger_1* bi2)
    IL2CPP_REGISTER_METHOD(0x023C9A40, uint32_t, SingleByteDivideInPlace_2, app::BigInteger_1* n, uint32_t d)
    IL2CPP_REGISTER_METHOD(0x023C6480, uint32_t, DwordMod_2, app::BigInteger_1* n, uint32_t d)
    IL2CPP_REGISTER_METHOD(0x02A322B0, app::BigInteger_1__Array*, DwordDivMod_2, app::BigInteger_1* n, uint32_t d)
    IL2CPP_REGISTER_METHOD(0x02A32610, app::BigInteger_1__Array*, multiByteDivide_2, app::BigInteger_1* bi1, app::BigInteger_1* bi2)
    IL2CPP_REGISTER_METHOD(0x02A33110, app::BigInteger_1*, LeftShift_2, app::BigInteger_1* bi, int32_t n)
    IL2CPP_REGISTER_METHOD(0x02A33610, app::BigInteger_1*, RightShift_2, app::BigInteger_1* bi, int32_t n)
    IL2CPP_REGISTER_METHOD(
        0x023CB4F0,
        void,
        Multiply_2,
        app::UInt32__Array* x,
        uint32_t x_offset,
        uint32_t x_len,
        app::UInt32__Array* y,
        uint32_t y_offset,
        uint32_t y_len,
        app::UInt32__Array* d,
        uint32_t d_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x023CB640,
        void,
        MultiplyMod2p32pmod_2,
        app::UInt32__Array* x,
        int32_t x_offset,
        int32_t x_len,
        app::UInt32__Array* y,
        int32_t y_offest,
        int32_t y_len,
        app::UInt32__Array* d,
        int32_t d_offset,
        int32_t mod
    )
    IL2CPP_REGISTER_METHOD(0x02A339D0, uint32_t, modInverse_3, app::BigInteger_1* bi, uint32_t modulus)
    IL2CPP_REGISTER_METHOD(0x02A33AD0, app::BigInteger_1*, modInverse_4, app::BigInteger_1* bi, app::BigInteger_1* modulus)
} // namespace app::classes::Mono::Math::BigInteger_Kernel
