#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ThreadedWebRequest_1_WebClientImpl_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/Thread.h>
#include <Modloader/app/structs/Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_.h>

namespace app::classes::Moon::Network::Web::ThreadedWebRequest_1_WebClientImpl_ {
    IL2CPP_REGISTER_METHOD(0x02723010, void, ctor, (app::ThreadedWebRequest_1_WebClientImpl_ * this_ptr, app::String* url, app::IRequest* request))
    IL2CPP_REGISTER_METHODINFO(0x04773E28, ThreadedWebRequest_1_WebClientImpl___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02723030, app::Thread*, Run, (app::ThreadedWebRequest_1_WebClientImpl_ * this_ptr, app::Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_* callback))
    IL2CPP_REGISTER_METHODINFO(0x0471AFC8, ThreadedWebRequest_1_WebClientImpl__Run__MethodInfo)
} // namespace app::classes::Moon::Network::Web::ThreadedWebRequest_1_WebClientImpl_
