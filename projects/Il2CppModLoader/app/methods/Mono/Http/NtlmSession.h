#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Http::NtlmSession {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NtlmSession * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02172D70, app::Authorization *, Authenticate, (app::NtlmSession * this_ptr, app::String * challenge, app::WebRequest * web_request, app::ICredentials * credentials))
}
