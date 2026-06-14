#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EndPointListener.h>
#include <Modloader/app/structs/EndPointManager.h>
#include <Modloader/app/structs/HttpListener.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::EndPointManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EndPointManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB6B90, void, AddListener, app::HttpListener* listener)
    IL2CPP_REGISTER_METHOD(0x01EB70B0, void, AddPrefix, app::String* prefix, app::HttpListener* listener)
    IL2CPP_REGISTER_METHOD(0x01EB7250, void, AddPrefixInternal, app::String* p, app::HttpListener* listener)
    IL2CPP_REGISTER_METHOD(0x01EB74E0, app::EndPointListener*, GetEPListener, app::String* host, int32_t port, app::HttpListener* listener, bool secure)
    IL2CPP_REGISTER_METHOD(0x01EB7AF0, void, RemoveEndPoint, app::EndPointListener* epl, app::IPEndPoint* ep)
    IL2CPP_REGISTER_METHOD(0x01EB7DE0, void, RemoveListener, app::HttpListener* listener)
    IL2CPP_REGISTER_METHOD(0x01EB8050, void, RemovePrefix, app::String* prefix, app::HttpListener* listener)
    IL2CPP_REGISTER_METHOD(0x01EB81F0, void, RemovePrefixInternal, app::String* prefix, app::HttpListener* listener)
    IL2CPP_REGISTER_METHOD(0x01EB8420, void, cctor, )
} // namespace app::classes::System::Net::EndPointManager
