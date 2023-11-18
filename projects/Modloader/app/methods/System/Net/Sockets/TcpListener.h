#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TcpListener.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/TcpClient.h>

namespace app::classes::System::Net::Sockets::TcpListener {
    IL2CPP_REGISTER_METHOD(0x020A4480, void, ctor_1, (app::TcpListener * this_ptr, app::IPEndPoint* local_e_p))
    IL2CPP_REGISTER_METHOD(0x020A4680, void, ctor_2, (app::TcpListener * this_ptr, app::IPAddress* localaddr, int32_t port))
    IL2CPP_REGISTER_METHOD(0x020A49C0, app::TcpListener*, Create, (int32_t port))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Socket*, get_Server, (app::TcpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A4C10, void, Start_1, (app::TcpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A4C20, void, Start_2, (app::TcpListener * this_ptr, int32_t backlog))
    IL2CPP_REGISTER_METHOD(0x020A4DD0, void, Stop, (app::TcpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A5080, bool, Pending, (app::TcpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A5160, app::TcpClient*, AcceptTcpClient, (app::TcpListener * this_ptr))
} // namespace app::classes::System::Net::Sockets::TcpListener
