#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/EndPointListener.h>
#include <Modloader/app/structs/HttpConnection.h>
#include <Modloader/app/structs/HttpListener.h>
#include <Modloader/app/structs/HttpListenerContext.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/ListenerPrefix.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/SocketAsyncEventArgs.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::System::Net::EndPointListener {
    IL2CPP_REGISTER_METHOD(
        0x01EB42F0,
        void,
        ctor,
        app::EndPointListener* this_ptr,
        app::HttpListener* listener,
        app::IPAddress* addr,
        int32_t port,
        bool secure
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::HttpListener*, get_Listener, app::EndPointListener* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB4AF0, void, Accept, app::Socket* socket, app::SocketAsyncEventArgs* e, app::Socket** accepted)
    IL2CPP_REGISTER_METHOD(0x01EB4C10, void, ProcessAccept, app::SocketAsyncEventArgs* args)
    IL2CPP_REGISTER_METHOD(0x01EB4F60, void, OnAccept, app::Object* sender, app::SocketAsyncEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01EB4F70, void, RemoveConnection, app::EndPointListener* this_ptr, app::HttpConnection* conn)
    IL2CPP_REGISTER_METHOD(0x01EB50C0, bool, BindContext, app::EndPointListener* this_ptr, app::HttpListenerContext* context)
    IL2CPP_REGISTER_METHOD(0x01EB5130, void, UnbindContext, app::EndPointListener* this_ptr, app::HttpListenerContext* context)
    IL2CPP_REGISTER_METHOD(0x01EB5160, app::HttpListener*, SearchListener, app::EndPointListener* this_ptr, app::Uri* uri, app::ListenerPrefix** prefix)
    IL2CPP_REGISTER_METHOD(
        0x01EB56B0,
        app::HttpListener*,
        MatchFromList,
        app::EndPointListener* this_ptr,
        app::String* host,
        app::String* path,
        app::ArrayList* list,
        app::ListenerPrefix** prefix
    )
    IL2CPP_REGISTER_METHOD(0x01EB5960, void, AddSpecial, app::EndPointListener* this_ptr, app::ArrayList* coll, app::ListenerPrefix* prefix)
    IL2CPP_REGISTER_METHOD(0x01EB5BD0, bool, RemoveSpecial, app::EndPointListener* this_ptr, app::ArrayList* coll, app::ListenerPrefix* prefix)
    IL2CPP_REGISTER_METHOD(0x01EB5D30, void, CheckIfRemove, app::EndPointListener* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB5E40, void, Close, app::EndPointListener* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB6190, void, AddPrefix, app::EndPointListener* this_ptr, app::ListenerPrefix* prefix, app::HttpListener* listener)
    IL2CPP_REGISTER_METHOD(0x01EB66D0, void, RemovePrefix, app::EndPointListener* this_ptr, app::ListenerPrefix* prefix, app::HttpListener* listener)
} // namespace app::classes::System::Net::EndPointListener
