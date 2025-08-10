#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Authorization.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/NtlmSession.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebRequest.h>

namespace app::classes::Mono::Http::NtlmSession {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NtlmSession* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02172D70,
        app::Authorization*,
        Authenticate,
        app::NtlmSession* this_ptr,
        app::String* challenge,
        app::WebRequest* web_request,
        app::ICredentials* credentials
    )
} // namespace app::classes::Mono::Http::NtlmSession
