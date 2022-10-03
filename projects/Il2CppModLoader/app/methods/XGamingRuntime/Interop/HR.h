#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XGamingRuntime::Interop::HR {
    IL2CPP_REGISTER_METHOD(0x01084DF0, bool, SUCCEEDED, (int32_t hr))
    IL2CPP_REGISTER_METHOD(0x030B1420, bool, FAILED, (int32_t hr))
} // namespace app::classes::XGamingRuntime::Interop::HR
