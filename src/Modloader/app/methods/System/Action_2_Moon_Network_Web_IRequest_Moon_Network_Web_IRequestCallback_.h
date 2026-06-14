#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_.h>
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/IRequestCallback.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x015FE410,
        void,
        Invoke,
        app::Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_* this_ptr,
        app::IRequest* arg1,
        app::IRequestCallback* arg2
    )
} // namespace app::classes::System::Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_
