#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemotingSurrogate.h>
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Runtime::Remoting::Messaging::RemotingSurrogate {
    IL2CPP_REGISTER_METHOD(0x023191D0, void, GetObjectData, (app::RemotingSurrogate * this_ptr, app::Object* obj, app::SerializationInfo* si, app::StreamingContext sc))
    IL2CPP_REGISTER_METHOD(0x023192A0, app::Object*, SetObjectData, (app::RemotingSurrogate * this_ptr, app::Object* obj, app::SerializationInfo* si, app::StreamingContext sc, app::ISurrogateSelector* selector))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemotingSurrogate * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Messaging::RemotingSurrogate
