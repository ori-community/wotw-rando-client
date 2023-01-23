#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Authorization.h>
#include <Modloader/app/structs/BasicClient.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebRequest.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Net::BasicClient {
    IL2CPP_REGISTER_METHOD(0x020148A0, app::Authorization*, Authenticate, (app::BasicClient * this_ptr, app::String* challenge, app::WebRequest* web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x020149B0, app::Byte__Array*, GetBytes, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x02014AA0, app::Authorization*, InternalAuthenticate, (app::WebRequest * web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x02014EC0, app::Authorization*, PreAuthenticate, (app::BasicClient * this_ptr, app::WebRequest* web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x02014EE0, app::String*, get_AuthenticationType, (app::BasicClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanPreAuthenticate, (app::BasicClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BasicClient * this_ptr))
} // namespace app::classes::System::Net::BasicClient
