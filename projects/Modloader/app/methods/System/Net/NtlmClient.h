#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::NtlmClient {
    IL2CPP_REGISTER_METHOD(0x01BCAFC0, void, ctor, (app::NtlmClient_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCB100, app::Authorization*, Authenticate, (app::NtlmClient_1 * this_ptr, app::String* challenge, app::WebRequest* web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Authorization*, PreAuthenticate, (app::NtlmClient_1 * this_ptr, app::WebRequest* web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x01BCB1C0, app::String*, get_AuthenticationType, (app::NtlmClient_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanPreAuthenticate, (app::NtlmClient_1 * this_ptr))
} // namespace app::classes::System::Net::NtlmClient
