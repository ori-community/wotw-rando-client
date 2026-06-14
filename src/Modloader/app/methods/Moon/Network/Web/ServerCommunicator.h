#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/ServerCommunicator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Network::Web::ServerCommunicator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ServerCommunicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E981D0, void, Send, app::ServerCommunicator* this_ptr, app::IRequest* request)
    IL2CPP_REGISTER_METHOD(0x02E984B0, app::String*, get_BaseURL, app::ServerCommunicator* this_ptr)
} // namespace app::classes::Moon::Network::Web::ServerCommunicator
