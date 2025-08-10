#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/IRequestCallback.h>
#include <Modloader/app/structs/ServerCommunicator_c.h>

namespace app::classes::Moon::Network::Web::ServerCommunicator___c {
    IL2CPP_REGISTER_METHOD(0x02E98530, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ServerCommunicator_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E98670, void, _Send_b__1_0, app::ServerCommunicator_c* this_ptr, app::IRequest* r, app::IRequestCallback* c)
} // namespace app::classes::Moon::Network::Web::ServerCommunicator___c
