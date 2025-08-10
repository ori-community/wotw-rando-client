#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallbackHelpers_c_DisplayClass5_0.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>

namespace app::classes::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass5_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CallbackHelpers_c_DisplayClass5_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02185C60,
        bool,
        _MonoToPublic_b__0,
        app::CallbackHelpers_c_DisplayClass5_0* this_ptr,
        app::Object* t,
        app::X509Certificate_1* c,
        app::X509Chain* ch,
        app::SslPolicyErrors__Enum e
    )
} // namespace app::classes::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass5_0
