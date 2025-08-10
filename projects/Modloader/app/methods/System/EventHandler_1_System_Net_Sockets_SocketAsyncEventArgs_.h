#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SocketAsyncEventArgs.h>

namespace app::classes::System::EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x015FE410,
        void,
        Invoke,
        app::EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_* this_ptr,
        app::Object* sender,
        app::SocketAsyncEventArgs* e
    )
} // namespace app::classes::System::EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_
