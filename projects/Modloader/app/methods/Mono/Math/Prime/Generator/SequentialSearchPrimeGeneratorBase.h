#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BigInteger.h>
#include <Modloader/app/structs/SequentialSearchPrimeGeneratorBase.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/BigInteger_1.h>
#include <Modloader/app/structs/SequentialSearchPrimeGeneratorBase_1.h>

namespace app::classes::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase {
    IL2CPP_REGISTER_METHOD(0x023CD2B0, app::BigInteger*, GenerateSearchBase_1, (app::SequentialSearchPrimeGeneratorBase * this_ptr, int32_t bits, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x01F938C0, app::BigInteger*, GenerateNewPrime_1, (app::SequentialSearchPrimeGeneratorBase * this_ptr, int32_t bits))
    IL2CPP_REGISTER_METHOD(0x023CD390, app::BigInteger*, GenerateNewPrime_2, (app::SequentialSearchPrimeGeneratorBase * this_ptr, int32_t bits, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsPrimeAcceptable_1, (app::SequentialSearchPrimeGeneratorBase * this_ptr, app::BigInteger* bi, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::SequentialSearchPrimeGeneratorBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A354F0, app::BigInteger_1*, GenerateSearchBase_2, (app::SequentialSearchPrimeGeneratorBase_1 * this_ptr, int32_t bits, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x01F938C0, app::BigInteger_1*, GenerateNewPrime_3, (app::SequentialSearchPrimeGeneratorBase_1 * this_ptr, int32_t bits))
    IL2CPP_REGISTER_METHOD(0x02A355D0, app::BigInteger_1*, GenerateNewPrime_4, (app::SequentialSearchPrimeGeneratorBase_1 * this_ptr, int32_t bits, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsPrimeAcceptable_2, (app::SequentialSearchPrimeGeneratorBase_1 * this_ptr, app::BigInteger_1* bi, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::SequentialSearchPrimeGeneratorBase_1 * this_ptr))
} // namespace app::classes::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase
