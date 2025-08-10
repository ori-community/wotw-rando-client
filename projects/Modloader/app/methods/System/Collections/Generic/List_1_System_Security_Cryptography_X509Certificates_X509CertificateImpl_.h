#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Security_Cryptography_X509Certificates_X509CertificateImpl_.h>
#include <Modloader/app/structs/X509CertificateImpl.h>

namespace app::classes::System::Collections::Generic::List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_System_Security_Cryptography_X509Certificates_X509CertificateImpl_,
        GetEnumerator,
        app::List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_* this_ptr,
        app::X509CertificateImpl* item
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::X509CertificateImpl*,
        get_Item,
        app::List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_System_Security_Cryptography_X509Certificates_X509CertificateImpl_
