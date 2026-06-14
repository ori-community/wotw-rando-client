#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#include <Modloader/app/structs/MobileTlsContext.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/SslProtocols__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>

namespace app::classes::Mono::Net::Security::MobileTlsContext {
    IL2CPP_REGISTER_METHOD(
        0x02182D80,
        void,
        ctor,
        app::MobileTlsContext* this_ptr,
        app::MobileAuthenticatedStream* parent,
        bool server_mode,
        app::String* target_host,
        app::SslProtocols__Enum enabled_protocols,
        app::X509Certificate_1* server_certificate,
        app::X509CertificateCollection_1* client_certificates,
        bool ask_for_client_cert
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MobileAuthenticatedStream*, get_Parent, app::MobileTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02182EF0, app::MonoTlsSettings*, get_Settings, app::MobileTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsServer, app::MobileTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_TargetHost, app::MobileTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_ServerName, app::MobileTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::X509CertificateCollection_1*, get_ClientCertificates, app::MobileTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::X509Certificate_1*, get_LocalServerCertificate, app::MobileTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02182F10, bool, ValidateCertificate_1, app::MobileTlsContext* this_ptr, app::X509Certificate_1* leaf, app::X509Chain* chain)
    IL2CPP_REGISTER_METHOD(0x02183060, bool, ValidateCertificate_2, app::MobileTlsContext* this_ptr, app::X509CertificateCollection_1* certificates)
    IL2CPP_REGISTER_METHOD(
        0x021831B0,
        app::X509Certificate_1*,
        SelectClientCertificate,
        app::MobileTlsContext* this_ptr,
        app::X509Certificate_1* server_certificate,
        app::String__Array* acceptable_issuers
    )
    IL2CPP_REGISTER_METHOD(0x021833C0, void, Dispose_1, app::MobileTlsContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, app::MobileTlsContext* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x02183470, void, Finalize, app::MobileTlsContext* this_ptr)
} // namespace app::classes::Mono::Net::Security::MobileTlsContext
