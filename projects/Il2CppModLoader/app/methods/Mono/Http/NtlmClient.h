#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Http::NtlmClient {
    IL2CPP_REGISTER_METHOD(0x02172460, app::Authorization*, Authenticate, (app::NtlmClient * this_ptr, app::String* challenge, app::WebRequest* web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Authorization*, PreAuthenticate, (app::NtlmClient * this_ptr, app::WebRequest* web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x02172920, app::String*, get_AuthenticationType, (app::NtlmClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanPreAuthenticate, (app::NtlmClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NtlmClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021729A0, void, cctor, ())
} // namespace app::classes::Mono::Http::NtlmClient
