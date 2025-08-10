#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BigInteger.h>
#include <Modloader/app/structs/BigInteger_1.h>
#include <Modloader/app/structs/ConfidenceFactor__Enum.h>
#include <Modloader/app/structs/ConfidenceFactor__Enum_1.h>

namespace app::classes::Mono::Math::Prime::PrimalityTests {
    IL2CPP_REGISTER_METHOD(0x023CDD00, int32_t, GetSPPRounds_1, app::BigInteger* bi, app::ConfidenceFactor__Enum confidence)
    IL2CPP_REGISTER_METHOD(0x023CDF20, bool, Test, app::BigInteger* n, app::ConfidenceFactor__Enum confidence)
    IL2CPP_REGISTER_METHOD(0x023CDF70, bool, RabinMillerTest_1, app::BigInteger* n, app::ConfidenceFactor__Enum confidence)
    IL2CPP_REGISTER_METHOD(0x023CE3B0, bool, SmallPrimeSppTest, app::BigInteger* bi, app::ConfidenceFactor__Enum confidence)
    IL2CPP_REGISTER_METHOD(0x02A35A10, int32_t, GetSPPRounds_2, app::BigInteger_1* bi, app::ConfidenceFactor__Enum_1 confidence)
    IL2CPP_REGISTER_METHOD(0x02A35C30, bool, RabinMillerTest_2, app::BigInteger_1* n, app::ConfidenceFactor__Enum_1 confidence)
} // namespace app::classes::Mono::Math::Prime::PrimalityTests
