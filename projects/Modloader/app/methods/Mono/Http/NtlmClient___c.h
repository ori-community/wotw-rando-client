#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NtlmClient_c.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/NtlmSession.h>

namespace app::classes::Mono::Http::NtlmClient___c {
    IL2CPP_REGISTER_METHOD(0x02172AF0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NtlmClient_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02172C30, app::NtlmSession*, _Authenticate_b__1_0, (app::NtlmClient_c * this_ptr, app::HttpWebRequest* x))
} // namespace app::classes::Mono::Http::NtlmClient___c
