#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallbackHelpers_c_DisplayClass8_0.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass8_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CallbackHelpers_c_DisplayClass8_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02185C90,
        app::X509Certificate_1*,
        _MonoToInternal_b__0,
        app::CallbackHelpers_c_DisplayClass8_0* this_ptr,
        app::String* t,
        app::X509CertificateCollection_1* lc,
        app::X509Certificate_1* rc,
        app::String__Array* ai
    )
} // namespace app::classes::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass8_0
