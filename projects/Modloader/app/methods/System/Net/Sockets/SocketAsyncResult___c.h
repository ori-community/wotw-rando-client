#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SocketAsyncResult_c.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::Sockets::SocketAsyncResult___c {
    IL2CPP_REGISTER_METHOD(0x020A24F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SocketAsyncResult_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A2630, void, _Complete_b__27_0, (app::SocketAsyncResult_c * this_ptr, app::Object* state))
} // namespace app::classes::System::Net::Sockets::SocketAsyncResult___c
