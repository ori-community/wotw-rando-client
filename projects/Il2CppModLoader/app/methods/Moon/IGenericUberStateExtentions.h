#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::IGenericUberStateExtentions {
    IL2CPP_REGISTER_METHOD(0x01B62580, void, SetGenericOverrideValue, (app::IGenericUberState * state, float value))
    IL2CPP_REGISTER_METHOD(0x01B62790, void, ClearGenericOverrideValue, (app::IGenericUberState * state))
}
