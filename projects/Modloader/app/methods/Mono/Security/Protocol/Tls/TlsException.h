#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::TlsException {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Alert*, get_Alert, (app::TlsException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291BD90, void, ctor_1, (app::TlsException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0291BE40, void, ctor_2, (app::TlsException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0291BF00, void, ctor_3, (app::TlsException * this_ptr, app::String* message, app::Exception* ex))
    IL2CPP_REGISTER_METHOD(0x0291BFC0, void, ctor_4, (app::TlsException * this_ptr, app::AlertLevel__Enum level, app::AlertDescription__Enum_1 description))
    IL2CPP_REGISTER_METHOD(0x0291C160, void, ctor_5, (app::TlsException * this_ptr, app::AlertLevel__Enum level, app::AlertDescription__Enum_1 description, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0291C2F0, void, ctor_6, (app::TlsException * this_ptr, app::AlertDescription__Enum_1 description))
    IL2CPP_REGISTER_METHOD(0x0291C330, void, ctor_7, (app::TlsException * this_ptr, app::AlertDescription__Enum_1 description, app::String* message))
} // namespace app::classes::Mono::Security::Protocol::Tls::TlsException
