#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Http::NtlmClient___c {
    IL2CPP_REGISTER_METHOD(0x02172AF0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NtlmClient_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02172C30, app::NtlmSession *, _Authenticate_b__1_0, (app::NtlmClient_c * this_ptr, app::HttpWebRequest * x))
    IL2CPP_REGISTER_METHODINFO(0x04765F20, NtlmClient_c__Authenticate_b__1_0__MethodInfo)
}
