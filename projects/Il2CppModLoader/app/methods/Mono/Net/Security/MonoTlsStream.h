#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Net::Security::MonoTlsStream {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::HttpWebRequest *, get_Request, (app::MonoTlsStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::WebExceptionStatus__Enum, get_ExceptionStatus, (app::MonoTlsStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E5A00, bool, get_CertificateValidationFailed, (app::MonoTlsStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E5A10, void, set_CertificateValidationFailed, (app::MonoTlsStream * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02184DA0, void, ctor, (app::MonoTlsStream * this_ptr, app::HttpWebRequest * request, app::NetworkStream * network_stream))
    IL2CPP_REGISTER_METHOD(0x02184EA0, app::Stream *, CreateStream, (app::MonoTlsStream * this_ptr, app::Byte__Array * buffer))
    IL2CPP_REGISTER_METHODINFO(0x04781F30, MonoTlsStream_CreateStream__MethodInfo)
}
