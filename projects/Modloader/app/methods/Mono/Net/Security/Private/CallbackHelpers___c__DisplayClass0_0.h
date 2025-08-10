#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallbackHelpers_c_DisplayClass0_0.h>
#include <Modloader/app/structs/MonoSslPolicyErrors__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>

namespace app::classes::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CallbackHelpers_c_DisplayClass0_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02185C30,
        bool,
        _PublicToMono_b__0,
        app::CallbackHelpers_c_DisplayClass0_0* this_ptr,
        app::String* h,
        app::X509Certificate_1* c,
        app::X509Chain* ch,
        app::MonoSslPolicyErrors__Enum e
    )
} // namespace app::classes::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0
