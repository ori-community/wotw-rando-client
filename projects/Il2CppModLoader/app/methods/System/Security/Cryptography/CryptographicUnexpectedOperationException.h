#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::CryptographicUnexpectedOperationException {
    IL2CPP_REGISTER_METHOD(0x020D0180, void, ctor_1, (app::CryptographicUnexpectedOperationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D0210, void, ctor_2, (app::CryptographicUnexpectedOperationException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x020D0230, void, ctor_3, (app::CryptographicUnexpectedOperationException * this_ptr, app::String* format, app::String* insert))
    IL2CPP_REGISTER_METHOD(0x020D0370, void, ctor_4, (app::CryptographicUnexpectedOperationException * this_ptr, app::String* message, app::Exception* inner))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_5, (app::CryptographicUnexpectedOperationException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Security::Cryptography::CryptographicUnexpectedOperationException
