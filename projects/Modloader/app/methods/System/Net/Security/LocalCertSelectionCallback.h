#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/LocalCertSelectionCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::System::Net::Security::LocalCertSelectionCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::LocalCertSelectionCallback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01BD0F10,
        app::X509Certificate_1*,
        Invoke,
        app::LocalCertSelectionCallback* this_ptr,
        app::String* target_host,
        app::X509CertificateCollection_1* local_certificates,
        app::X509Certificate_1* remote_certificate,
        app::String__Array* acceptable_issuers
    )
    IL2CPP_REGISTER_METHOD(
        0x01BD1540,
        app::IAsyncResult*,
        BeginInvoke,
        app::LocalCertSelectionCallback* this_ptr,
        app::String* target_host,
        app::X509CertificateCollection_1* local_certificates,
        app::X509Certificate_1* remote_certificate,
        app::String__Array* acceptable_issuers,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, app::X509Certificate_1*, EndInvoke, app::LocalCertSelectionCallback* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Net::Security::LocalCertSelectionCallback
