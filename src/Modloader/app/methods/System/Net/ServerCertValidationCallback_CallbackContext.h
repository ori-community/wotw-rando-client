#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServerCertValidationCallback_CallbackContext.h>
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>

namespace app::classes::System::Net::ServerCertValidationCallback_CallbackContext {
    IL2CPP_REGISTER_METHOD(
        0x01BD3970,
        void,
        ctor,
        app::ServerCertValidationCallback_CallbackContext* this_ptr,
        app::Object* request,
        app::X509Certificate_1* certificate,
        app::X509Chain* chain,
        app::SslPolicyErrors__Enum ssl_policy_errors
    )
}
