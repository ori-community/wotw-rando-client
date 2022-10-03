#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Sockets::TcpClient {
    IL2CPP_REGISTER_METHOD(0x020A2BC0, void, ctor_1, (app::TcpClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A2C70, void, ctor_2, (app::TcpClient * this_ptr, app::AddressFamily__Enum family))
    IL2CPP_REGISTER_METHODINFO(0x0478A140, TcpClient__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A2F10, void, ctor_3, (app::TcpClient * this_ptr, app::String* hostname, int32_t port))
    IL2CPP_REGISTER_METHODINFO(0x047380E0, TcpClient__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A3130, void, ctor_4, (app::TcpClient * this_ptr, app::Socket* accepted_socket))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Socket*, get_Client, (app::TcpClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Client, (app::TcpClient * this_ptr, app::Socket* value))
    IL2CPP_REGISTER_METHOD(0x020A31E0, void, Connect_1, (app::TcpClient * this_ptr, app::String* hostname, int32_t port))
    IL2CPP_REGISTER_METHODINFO(0x04725F50, TcpClient_Connect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A3A60, void, Connect_2, (app::TcpClient * this_ptr, app::IPEndPoint* remote_e_p))
    IL2CPP_REGISTER_METHODINFO(0x04717AF8, TcpClient_Connect_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A3BD0, app::IAsyncResult*, BeginConnect, (app::TcpClient * this_ptr, app::String* host, int32_t port, app::AsyncCallback* request_callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x020A3CC0, void, EndConnect, (app::TcpClient * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x020A3D80, app::NetworkStream*, GetStream, (app::TcpClient * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748A68, TcpClient_GetStream__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A3FE0, void, Close, (app::TcpClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A4080, void, Dispose_1, (app::TcpClient * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x020A4270, void, Dispose_2, (app::TcpClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A4290, void, Finalize, (app::TcpClient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A4310, void, initialize, (app::TcpClient * this_ptr))
} // namespace app::classes::System::Net::Sockets::TcpClient
