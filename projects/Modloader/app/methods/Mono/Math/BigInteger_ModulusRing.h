#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BigInteger.h>
#include <Modloader/app/structs/BigInteger_1.h>
#include <Modloader/app/structs/BigInteger_ModulusRing.h>
#include <Modloader/app/structs/BigInteger_ModulusRing_1.h>

namespace app::classes::Mono::Math::BigInteger_ModulusRing {
    IL2CPP_REGISTER_METHOD(0x023CC160, void, ctor_1, app::BigInteger_ModulusRing* this_ptr, app::BigInteger* modulus)
    IL2CPP_REGISTER_METHOD(0x023CC370, void, BarrettReduction_1, app::BigInteger_ModulusRing* this_ptr, app::BigInteger* x)
    IL2CPP_REGISTER_METHOD(0x023CC8E0, app::BigInteger*, Multiply_1, app::BigInteger_ModulusRing* this_ptr, app::BigInteger* a, app::BigInteger* b)
    IL2CPP_REGISTER_METHOD(0x023CCB70, app::BigInteger*, Difference_1, app::BigInteger_ModulusRing* this_ptr, app::BigInteger* a, app::BigInteger* b)
    IL2CPP_REGISTER_METHOD(0x023CCDD0, app::BigInteger*, Pow_1, app::BigInteger_ModulusRing* this_ptr, app::BigInteger* a, app::BigInteger* k)
    IL2CPP_REGISTER_METHOD(0x023CCFE0, app::BigInteger*, Pow_2, app::BigInteger_ModulusRing* this_ptr, uint32_t b, app::BigInteger* exp)
    IL2CPP_REGISTER_METHOD(0x02A343B0, void, ctor_2, app::BigInteger_ModulusRing_1* this_ptr, app::BigInteger_1* modulus)
    IL2CPP_REGISTER_METHOD(0x02A345C0, void, BarrettReduction_2, app::BigInteger_ModulusRing_1* this_ptr, app::BigInteger_1* x)
    IL2CPP_REGISTER_METHOD(0x02A34B30, app::BigInteger_1*, Multiply_2, app::BigInteger_ModulusRing_1* this_ptr, app::BigInteger_1* a, app::BigInteger_1* b)
    IL2CPP_REGISTER_METHOD(0x02A34DC0, app::BigInteger_1*, Difference_2, app::BigInteger_ModulusRing_1* this_ptr, app::BigInteger_1* a, app::BigInteger_1* b)
    IL2CPP_REGISTER_METHOD(0x02A35020, app::BigInteger_1*, Pow_3, app::BigInteger_ModulusRing_1* this_ptr, app::BigInteger_1* a, app::BigInteger_1* k)
    IL2CPP_REGISTER_METHOD(0x02A35230, app::BigInteger_1*, Pow_4, app::BigInteger_ModulusRing_1* this_ptr, uint32_t b, app::BigInteger_1* exp)
} // namespace app::classes::Mono::Math::BigInteger_ModulusRing
