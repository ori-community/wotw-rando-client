#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Certificate2.h>
#include <Modloader/app/structs/X509Certificate2Impl.h>
#include <Modloader/app/structs/X509CertificateImpl.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Certificate_2.h>
#include <Modloader/app/structs/X509ChainImpl.h>
#include <Modloader/app/structs/X509KeyStorageFlags__Enum.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Helper2 {
    IL2CPP_REGISTER_METHOD(0x0257BC80, int64_t, GetSubjectNameHash_1, app::X509Certificate_1* certificate)
    IL2CPP_REGISTER_METHOD(0x0257BCB0, int64_t, GetSubjectNameHash_2, app::X509CertificateImpl* impl)
    IL2CPP_REGISTER_METHOD(0x0257BD00, void, ExportAsPEM_1, app::X509Certificate_1* certificate, app::Stream* stream, bool include_human_readable_form)
    IL2CPP_REGISTER_METHOD(0x0257BD40, void, ExportAsPEM_2, app::X509CertificateImpl* impl, app::Stream* stream, bool include_human_readable_form)
    IL2CPP_REGISTER_METHOD(0x0257BD90, void, Initialize, )
    IL2CPP_REGISTER_METHOD(0x0257BF40, void, ThrowIfContextInvalid_1, app::X509CertificateImpl* impl)
    IL2CPP_REGISTER_METHOD(0x0257BF50, app::X509Certificate_1*, GetNativeInstance, app::X509CertificateImpl* impl)
    IL2CPP_REGISTER_METHOD(
        0x0257BFA0,
        app::X509Certificate2Impl*,
        Import_1,
        app::Byte__Array* raw_data,
        app::String* password,
        app::X509KeyStorageFlags__Enum key_storage_flags,
        bool disable_provider
    )
    IL2CPP_REGISTER_METHOD(0x0257C120, app::X509Certificate2Impl*, Import_2, app::X509Certificate_1* cert, bool disable_provider)
    IL2CPP_REGISTER_METHOD(0x021C5A50, app::X509Certificate_2*, GetMonoCertificate, app::X509Certificate2* certificate)
    IL2CPP_REGISTER_METHOD(0x0257C2A0, app::X509ChainImpl*, CreateChainImpl, bool use_machine_context)
    IL2CPP_REGISTER_METHOD(0x01E17CF0, bool, IsValid, app::X509ChainImpl* impl)
    IL2CPP_REGISTER_METHOD(0x0257C3F0, void, ThrowIfContextInvalid_2, app::X509ChainImpl* impl)
    IL2CPP_REGISTER_METHOD(0x0257C4A0, app::Exception*, GetInvalidChainContextException, )
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Helper2
