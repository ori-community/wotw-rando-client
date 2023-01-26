#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Authorization.h>
#include <Modloader/app/structs/DigestClient.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebRequest.h>

namespace app::classes::System::Net::DigestClient {
    IL2CPP_REGISTER_METHOD(0x01EADAA0, app::Hashtable*, get_Cache, ())
    IL2CPP_REGISTER_METHOD(0x01EADCB0, void, CheckExpired, (int32_t count))
    IL2CPP_REGISTER_METHOD(0x01EAE310, app::Authorization*, Authenticate, (app::DigestClient * this_ptr, app::String* challenge, app::WebRequest* web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x01EAE730, app::Authorization*, PreAuthenticate, (app::DigestClient * this_ptr, app::WebRequest* web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x01EAE8D0, app::String*, get_AuthenticationType, (app::DigestClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanPreAuthenticate, (app::DigestClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DigestClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAE950, void, cctor, ())
} // namespace app::classes::System::Net::DigestClient
