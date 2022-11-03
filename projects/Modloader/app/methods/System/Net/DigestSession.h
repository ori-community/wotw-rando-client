#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::DigestSession {
    IL2CPP_REGISTER_METHOD(0x01EAF500, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01EAF590, void, ctor, (app::DigestSession * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAF640, app::String*, get_Algorithm, (app::DigestSession * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAF690, app::String*, get_Realm, (app::DigestSession * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAF6E0, app::String*, get_Nonce, (app::DigestSession * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAF730, app::String*, get_Opaque, (app::DigestSession * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAF780, app::String*, get_QOP, (app::DigestSession * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAF7D0, app::String*, get_CNonce, (app::DigestSession * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAF910, bool, Parse, (app::DigestSession * this_ptr, app::String* challenge))
    IL2CPP_REGISTER_METHOD(0x01EAFBD0, app::String*, HashToHexString, (app::DigestSession * this_ptr, app::String* to_be_hashed))
    IL2CPP_REGISTER_METHOD(0x01EAFE30, app::String*, HA1, (app::DigestSession * this_ptr, app::String* username, app::String* password))
    IL2CPP_REGISTER_METHOD(0x01EB00E0, app::String*, HA2, (app::DigestSession * this_ptr, app::HttpWebRequest* web_request))
    IL2CPP_REGISTER_METHOD(0x01EB0280, app::String*, Response, (app::DigestSession * this_ptr, app::String* username, app::String* password, app::HttpWebRequest* web_request))
    IL2CPP_REGISTER_METHOD(0x01EB0510, app::Authorization*, Authenticate, (app::DigestSession * this_ptr, app::WebRequest* web_request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHODINFO(0x0476C5D8, DigestSession_Authenticate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DateTime, get_LastUse, (app::DigestSession * this_ptr))
} // namespace app::classes::System::Net::DigestSession
