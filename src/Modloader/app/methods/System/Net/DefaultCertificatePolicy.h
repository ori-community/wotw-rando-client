#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultCertificatePolicy.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/WebRequest.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::System::Net::DefaultCertificatePolicy {
    IL2CPP_REGISTER_METHOD(
        0x01EAC660,
        bool,
        CheckValidationResult,
        app::DefaultCertificatePolicy* this_ptr,
        app::ServicePoint* point,
        app::X509Certificate_1* certificate,
        app::WebRequest* request,
        int32_t certificate_problem
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DefaultCertificatePolicy* this_ptr)
} // namespace app::classes::System::Net::DefaultCertificatePolicy
