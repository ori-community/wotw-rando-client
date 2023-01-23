#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ServerCertValidationCallback.h>
#include <Modloader/app/structs/RemoteCertificateValidationCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>

namespace app::classes::System::Net::ServerCertValidationCallback {
    IL2CPP_REGISTER_METHOD(0x01BD34E0, void, ctor, (app::ServerCertValidationCallback * this_ptr, app::RemoteCertificateValidationCallback* validation_callback))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::RemoteCertificateValidationCallback*, get_ValidationCallback, (app::ServerCertValidationCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BD3590, void, Callback, (app::ServerCertValidationCallback * this_ptr, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x0474A940, ServerCertValidationCallback_Callback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BD36B0, bool, Invoke, (app::ServerCertValidationCallback * this_ptr, app::Object* request, app::X509Certificate_1* certificate, app::X509Chain* chain, app::SslPolicyErrors__Enum ssl_policy_errors))
} // namespace app::classes::System::Net::ServerCertValidationCallback
