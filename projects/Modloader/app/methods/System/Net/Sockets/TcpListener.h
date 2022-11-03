#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Sockets::TcpListener {
    IL2CPP_REGISTER_METHOD(0x020A4480, void, ctor_1, (app::TcpListener * this_ptr, app::IPEndPoint* local_e_p))
    IL2CPP_REGISTER_METHODINFO(0x0474A310, TcpListener__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A4680, void, ctor_2, (app::TcpListener * this_ptr, app::IPAddress* localaddr, int32_t port))
    IL2CPP_REGISTER_METHODINFO(0x0475AA98, TcpListener__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A49C0, app::TcpListener*, Create, (int32_t port))
    IL2CPP_REGISTER_METHODINFO(0x0476C968, TcpListener_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Socket*, get_Server, (app::TcpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A4C10, void, Start_1, (app::TcpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A4C20, void, Start_2, (app::TcpListener * this_ptr, int32_t backlog))
    IL2CPP_REGISTER_METHODINFO(0x04792058, TcpListener_Start_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A4DD0, void, Stop, (app::TcpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A5080, bool, Pending, (app::TcpListener * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757150, TcpListener_Pending__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A5160, app::TcpClient*, AcceptTcpClient, (app::TcpListener * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777C88, TcpListener_AcceptTcpClient__MethodInfo)
} // namespace app::classes::System::Net::Sockets::TcpListener
