#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Unity::Debug {
    IL2CPP_REGISTER_METHOD(0x02186A20, void, CheckAndThrow_1, (app::UnityTls_unitytls_errorstate error_state, app::String* context, app::AlertDescription__Enum default_alert))
    IL2CPP_REGISTER_METHODINFO(0x047128D0, Debug_CheckAndThrow__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02186B30, void, CheckAndThrow_2, (app::UnityTls_unitytls_errorstate error_state, app::UnityTls_unitytls_x509verify_result__Enum verify_result, app::String* context, app::AlertDescription__Enum default_alert))
    IL2CPP_REGISTER_METHODINFO(0x04755668, Debug_CheckAndThrow_1__MethodInfo)
} // namespace app::classes::Mono::Unity::Debug
