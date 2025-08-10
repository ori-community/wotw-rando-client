#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfidenceFactor__Enum.h>
#include <Modloader/app/structs/ConfidenceFactor__Enum_1.h>
#include <Modloader/app/structs/PrimalityTest.h>
#include <Modloader/app/structs/PrimalityTest_1.h>
#include <Modloader/app/structs/PrimeGeneratorBase.h>
#include <Modloader/app/structs/PrimeGeneratorBase_1.h>

namespace app::classes::Mono::Math::Prime::Generator::PrimeGeneratorBase {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::ConfidenceFactor__Enum, get_Confidence_1, app::PrimeGeneratorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023CD150, app::PrimalityTest*, get_PrimalityTest_1, app::PrimeGeneratorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023CD2A0, int32_t, get_TrialDivisionBounds_1, app::PrimeGeneratorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::PrimeGeneratorBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::ConfidenceFactor__Enum_1, get_Confidence_2, app::PrimeGeneratorBase_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A353A0, app::PrimalityTest_1*, get_PrimalityTest_2, app::PrimeGeneratorBase_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023CD2A0, int32_t, get_TrialDivisionBounds_2, app::PrimeGeneratorBase_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, app::PrimeGeneratorBase_1* this_ptr)
} // namespace app::classes::Mono::Math::Prime::Generator::PrimeGeneratorBase
