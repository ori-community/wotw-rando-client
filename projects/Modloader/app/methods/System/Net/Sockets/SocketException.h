#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SocketException.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SocketError__Enum.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Net::Sockets::SocketException {
    IL2CPP_REGISTER_METHOD(0x020A2700, int32_t, WSAGetLastError_internal, ())
    IL2CPP_REGISTER_METHOD(0x020A2730, void, ctor_1, (app::SocketException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A2800, void, ctor_2, (app::SocketException * this_ptr, int32_t error, app::String* message))
    IL2CPP_REGISTER_METHOD(0x020A28C0, void, ctor_3, (app::SocketException * this_ptr, int32_t error_code))
    IL2CPP_REGISTER_METHOD(0x020A2970, void, ctor_4, (app::SocketException * this_ptr, app::SocketError__Enum socket_error))
    IL2CPP_REGISTER_METHOD(0x020A2A20, void, ctor_5, (app::SocketException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_ErrorCode, (app::SocketException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A2AE0, app::String*, get_Message, (app::SocketException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989BF0, app::SocketError__Enum, get_SocketErrorCode, (app::SocketException * this_ptr))
} // namespace app::classes::System::Net::Sockets::SocketException
