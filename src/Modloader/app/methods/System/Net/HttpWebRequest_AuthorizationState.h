#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpStatusCode__Enum.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/HttpWebRequest_AuthorizationState__Boxed.h>
#include <Modloader/app/structs/HttpWebRequest_NtlmAuthState__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebResponse.h>

namespace app::classes::System::Net::HttpWebRequest_AuthorizationState {
    IL2CPP_REGISTER_METHOD(0x00114130, bool, get_IsCompleted, app::HttpWebRequest_AuthorizationState__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001155B0, app::HttpWebRequest_NtlmAuthState__Enum, get_NtlmAuthState, app::HttpWebRequest_AuthorizationState__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D70A0, bool, get_IsNtlmAuthenticated, app::HttpWebRequest_AuthorizationState__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D70C0, void, ctor, app::HttpWebRequest_AuthorizationState__Boxed* this_ptr, app::HttpWebRequest* request, bool is_proxy)
    IL2CPP_REGISTER_METHOD(
        0x001D70E0,
        bool,
        CheckAuthorization,
        app::HttpWebRequest_AuthorizationState__Boxed* this_ptr,
        app::WebResponse* response,
        app::HttpStatusCode__Enum code
    )
    IL2CPP_REGISTER_METHOD(0x001D70F0, void, Reset, app::HttpWebRequest_AuthorizationState__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D7100, app::String*, ToString, app::HttpWebRequest_AuthorizationState__Boxed* this_ptr)
} // namespace app::classes::System::Net::HttpWebRequest_AuthorizationState
