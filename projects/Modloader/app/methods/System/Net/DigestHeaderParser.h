#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DigestHeaderParser.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::DigestHeaderParser {
    IL2CPP_REGISTER_METHOD(0x01EAEAB0, void, ctor, (app::DigestHeaderParser * this_ptr, app::String* header))
    IL2CPP_REGISTER_METHOD(0x00791D90, app::String*, get_Realm, (app::DigestHeaderParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00791DD0, app::String*, get_Opaque, (app::DigestHeaderParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAEBA0, app::String*, get_Nonce, (app::DigestHeaderParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAEBE0, app::String*, get_Algorithm, (app::DigestHeaderParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAEC20, app::String*, get_QOP, (app::DigestHeaderParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAEC60, bool, Parse, (app::DigestHeaderParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAEEF0, void, SkipWhitespace, (app::DigestHeaderParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAEF60, app::String*, GetKey, (app::DigestHeaderParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAF010, bool, GetKeywordAndValue, (app::DigestHeaderParser * this_ptr, app::String** key, app::String** value))
    IL2CPP_REGISTER_METHOD(0x01EAF290, void, cctor, ())
} // namespace app::classes::System::Net::DigestHeaderParser
