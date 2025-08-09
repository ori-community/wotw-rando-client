#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_.h>
#include <Modloader/app/structs/IList_1_System_ArraySegment_1_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/SocketAsyncEventArgs.h>
#include <Modloader/app/structs/SocketAsyncOperation__Enum.h>
#include <Modloader/app/structs/SocketError__Enum.h>

namespace app::classes::System::Net::Sockets::SocketAsyncEventArgs {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Socket*, get_AcceptSocket, app::SocketAsyncEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_AcceptSocket, app::SocketAsyncEventArgs* this_ptr, app::Socket* value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IList_1_System_ArraySegment_1_*, get_BufferList, app::SocketAsyncEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_BytesTransferred, app::SocketAsyncEventArgs* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, get_Count, app::SocketAsyncEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_LastOperation, app::SocketAsyncEventArgs* this_ptr, app::SocketAsyncOperation__Enum value)
    IL2CPP_REGISTER_METHOD(0x00843E80, void, set_SendPacketsSendSize, app::SocketAsyncEventArgs* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FD490, app::SocketError__Enum, get_SocketError, app::SocketAsyncEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_SocketError, app::SocketAsyncEventArgs* this_ptr, app::SocketError__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Object*, get_UserToken, app::SocketAsyncEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_UserToken, app::SocketAsyncEventArgs* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x020A1770,
        void,
        add_Completed,
        app::SocketAsyncEventArgs* this_ptr,
        app::EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x020A1860,
        void,
        remove_Completed,
        app::SocketAsyncEventArgs* this_ptr,
        app::EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_* value
    )
    IL2CPP_REGISTER_METHOD(0x020A1950, void, ctor, app::SocketAsyncEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020A1AC0, void, Finalize, app::SocketAsyncEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020A1AE0, void, Dispose_1, app::SocketAsyncEventArgs* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x020A1AF0, void, Dispose_2, app::SocketAsyncEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020A1BA0, void, SetLastOperation, app::SocketAsyncEventArgs* this_ptr, app::SocketAsyncOperation__Enum op)
    IL2CPP_REGISTER_METHOD(0x020A1CA0, void, Complete, app::SocketAsyncEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020A1CC0, void, OnCompleted, app::SocketAsyncEventArgs* this_ptr, app::SocketAsyncEventArgs* e)
} // namespace app::classes::System::Net::Sockets::SocketAsyncEventArgs
