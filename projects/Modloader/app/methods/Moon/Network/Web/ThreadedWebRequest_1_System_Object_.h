#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Thread.h>
#include <Modloader/app/structs/ThreadedWebRequest_1_System_Object_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_.h>
#include <Modloader/app/structs/WebResponse_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ElapsedEventArgs.h>

namespace app::classes::Moon::Network::Web::ThreadedWebRequest_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Thread*, get_Thread, (app::ThreadedWebRequest_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02723010, void, ctor, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::String* url, app::IRequest* request))
    IL2CPP_REGISTER_METHOD(0x02723030, app::Thread*, Run, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_* callback))
    IL2CPP_REGISTER_METHOD(0x02723280, void, Finish, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::WebResponse_1* response))
    IL2CPP_REGISTER_METHOD(0x027235B0, void, StartTimeout, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x02723830, void, StopTimeout, (app::ThreadedWebRequest_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02723890, void, TimeoutHandler, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::Object* sender, app::ElapsedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x02723B10, app::String*, ParamToString, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02723BB0, void, _Run_b__7_0, (app::ThreadedWebRequest_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02724430, void, _Run_b__7_1, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::WebResponse_1* response))
} // namespace app::classes::Moon::Network::Web::ThreadedWebRequest_1_System_Object_
