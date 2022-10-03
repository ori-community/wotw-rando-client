#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::IO::Pipes::NamedPipeServerStream {
    IL2CPP_REGISTER_METHOD(0x01F99640, void, ctor, (app::NamedPipeServerStream * this_ptr, app::String* pipe_name, app::PipeDirection__Enum direction, int32_t max_number_of_server_instances, app::PipeTransmissionMode__Enum transmission_mode, app::PipeOptions__Enum options, int32_t in_buffer_size, int32_t out_buffer_size))
    IL2CPP_REGISTER_METHODINFO(0x04751820, NamedPipeServerStream__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A93850, void, Finalize, (app::NamedPipeServerStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F996B0, void, WaitForConnection, (app::NamedPipeServerStream * this_ptr))
} // namespace app::classes::System::IO::Pipes::NamedPipeServerStream
