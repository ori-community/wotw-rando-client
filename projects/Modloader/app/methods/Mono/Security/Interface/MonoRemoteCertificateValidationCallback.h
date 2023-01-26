#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoRemoteCertificateValidationCallback.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/MonoSslPolicyErrors__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>

namespace app::classes::Mono::Security::Interface::MonoRemoteCertificateValidationCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::MonoRemoteCertificateValidationCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01BD1590, bool, Invoke, (app::MonoRemoteCertificateValidationCallback * this_ptr, app::String* target_host, app::X509Certificate_1* certificate, app::X509Chain* chain, app::MonoSslPolicyErrors__Enum ssl_policy_errors))
    IL2CPP_REGISTER_METHOD(0x02A46450, app::IAsyncResult*, BeginInvoke, (app::MonoRemoteCertificateValidationCallback * this_ptr, app::String* target_host, app::X509Certificate_1* certificate, app::X509Chain* chain, app::MonoSslPolicyErrors__Enum ssl_policy_errors, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::MonoRemoteCertificateValidationCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Security::Interface::MonoRemoteCertificateValidationCallback
