#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::RemotingSurrogate {
    IL2CPP_REGISTER_METHOD(0x023191D0, void, GetObjectData, (app::RemotingSurrogate * this_ptr, app::Object* obj, app::SerializationInfo* si, app::StreamingContext sc))
    IL2CPP_REGISTER_METHODINFO(0x04788900, RemotingSurrogate_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023192A0, app::Object*, SetObjectData, (app::RemotingSurrogate * this_ptr, app::Object* obj, app::SerializationInfo* si, app::StreamingContext sc, app::ISurrogateSelector* selector))
    IL2CPP_REGISTER_METHODINFO(0x04770108, RemotingSurrogate_SetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemotingSurrogate * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Messaging::RemotingSurrogate
