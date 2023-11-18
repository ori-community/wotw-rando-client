#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICertificateValidator.h>
#include <Modloader/app/structs/ChainValidationHelper.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/MonoTlsStream.h>
#include <Modloader/app/structs/ServerCertValidationCallbackWrapper.h>
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/ValidationResult.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>

namespace app::classes::Mono::Net::Security::ChainValidationHelper {
    IL2CPP_REGISTER_METHOD(0x0217CCD0, app::ICertificateValidator*, GetInternalValidator, (app::MonoTlsProvider * provider, app::MonoTlsSettings* settings))
    IL2CPP_REGISTER_METHOD(0x0217CF20, app::ChainValidationHelper*, Create, (app::MonoTlsProvider * provider, app::MonoTlsSettings** settings, app::MonoTlsStream* stream))
    IL2CPP_REGISTER_METHOD(0x0217D0B0, void, ctor, (app::ChainValidationHelper * this_ptr, app::MonoTlsProvider* provider, app::MonoTlsSettings* settings, bool clone_settings, app::MonoTlsStream* stream, app::ServerCertValidationCallbackWrapper* callback_wrapper))
    IL2CPP_REGISTER_METHOD(0x01F767C0, app::X509Certificate_1*, DefaultSelectionCallback, (app::String * target_host, app::X509CertificateCollection_1* local_certificates, app::X509Certificate_1* remote_certificate, app::String__Array* acceptable_issuers))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MonoTlsSettings*, get_Settings, (app::ChainValidationHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0217D630, bool, SelectClientCertificate, (app::ChainValidationHelper * this_ptr, app::String* target_host, app::X509CertificateCollection_1* local_certificates, app::X509Certificate_1* remote_certificate, app::String__Array* acceptable_issuers, app::X509Certificate_1** client_certificate))
    IL2CPP_REGISTER_METHOD(0x0217D680, app::ValidationResult*, ValidateCertificate_1, (app::ChainValidationHelper * this_ptr, app::String* host, bool server_mode, app::X509CertificateCollection_1* certs))
    IL2CPP_REGISTER_METHOD(0x0217D7E0, app::ValidationResult*, ValidateCertificate_2, (app::ChainValidationHelper * this_ptr, app::String* host, bool server_mode, app::X509Certificate_1* leaf, app::X509Chain* chain))
    IL2CPP_REGISTER_METHOD(0x0217D920, app::ValidationResult*, ValidateChain_1, (app::ChainValidationHelper * this_ptr, app::String* host, bool server, app::X509Certificate_1* leaf, app::X509Chain* chain, app::X509CertificateCollection_1* certs, app::SslPolicyErrors__Enum errors))
    IL2CPP_REGISTER_METHOD(0x0217DAD0, app::ValidationResult*, ValidateChain_2, (app::ChainValidationHelper * this_ptr, app::String* host, bool server, app::X509Certificate_1* leaf, app::X509Chain** chain, app::X509CertificateCollection_1* certs, app::SslPolicyErrors__Enum errors))
} // namespace app::classes::Mono::Net::Security::ChainValidationHelper
