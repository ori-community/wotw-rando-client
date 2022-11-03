#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::CryptographicException {
    IL2CPP_REGISTER_METHOD(0x020CFEC0, void, ctor_1, (app::CryptographicException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020CFF50, void, ctor_2, (app::CryptographicException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x020CFF70, void, ctor_3, (app::CryptographicException * this_ptr, app::String* format, app::String* insert))
    IL2CPP_REGISTER_METHOD(0x020D00B0, void, ctor_4, (app::CryptographicException * this_ptr, app::String* message, app::Exception* inner))
    IL2CPP_REGISTER_METHOD(0x020D00D0, void, ctor_5, (app::CryptographicException * this_ptr, int32_t hr))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_6, (app::CryptographicException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x020D0120, void, ThrowCryptographicException, (int32_t hr))
    IL2CPP_REGISTER_METHODINFO(0x04736990, CryptographicException_ThrowCryptographicException__MethodInfo)
} // namespace app::classes::System::Security::Cryptography::CryptographicException
