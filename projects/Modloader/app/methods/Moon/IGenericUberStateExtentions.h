#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IGenericUberState.h>

namespace app::classes::Moon::IGenericUberStateExtentions {
    IL2CPP_REGISTER_METHOD(0x01B62580, void, SetGenericOverrideValue, app::IGenericUberState* state, float value)
    IL2CPP_REGISTER_METHOD(0x01B62790, void, ClearGenericOverrideValue, app::IGenericUberState* state)
} // namespace app::classes::Moon::IGenericUberStateExtentions
