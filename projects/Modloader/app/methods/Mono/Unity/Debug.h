#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AlertDescription__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstate.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_result__Enum.h>

namespace app::classes::Mono::Unity::Debug {
    IL2CPP_REGISTER_METHOD(
        0x02186A20,
        void,
        CheckAndThrow_1,
        app::UnityTls_unitytls_errorstate error_state,
        app::String* context,
        app::AlertDescription__Enum default_alert
    )
    IL2CPP_REGISTER_METHOD(
        0x02186B30,
        void,
        CheckAndThrow_2,
        app::UnityTls_unitytls_errorstate error_state,
        app::UnityTls_unitytls_x509verify_result__Enum verify_result,
        app::String* context,
        app::AlertDescription__Enum default_alert
    )
} // namespace app::classes::Mono::Unity::Debug
