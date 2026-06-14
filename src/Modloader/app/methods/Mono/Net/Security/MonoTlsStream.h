#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/MonoTlsStream.h>
#include <Modloader/app/structs/NetworkStream.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/WebExceptionStatus__Enum.h>

namespace app::classes::Mono::Net::Security::MonoTlsStream {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::HttpWebRequest*, get_Request, app::MonoTlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::WebExceptionStatus__Enum, get_ExceptionStatus, app::MonoTlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E5A00, bool, get_CertificateValidationFailed, app::MonoTlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E5A10, void, set_CertificateValidationFailed, app::MonoTlsStream* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02184DA0, void, ctor, app::MonoTlsStream* this_ptr, app::HttpWebRequest* request, app::NetworkStream* network_stream)
    IL2CPP_REGISTER_METHOD(0x02184EA0, app::Stream*, CreateStream, app::MonoTlsStream* this_ptr, app::Byte__Array* buffer)
} // namespace app::classes::Mono::Net::Security::MonoTlsStream
