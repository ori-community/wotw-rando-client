#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMethodCallMessage.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::Remoting::Channels::CADSerializer {
    IL2CPP_REGISTER_METHOD(0x01A9AC40, app::IMessage*, DeserializeMessage, app::MemoryStream* mem, app::IMethodCallMessage* msg)
    IL2CPP_REGISTER_METHOD(0x01A9AC90, app::MemoryStream*, SerializeMessage, app::IMessage* msg)
    IL2CPP_REGISTER_METHOD(0x01A9AFD0, app::Object*, DeserializeObjectSafe, app::Byte__Array* mem)
    IL2CPP_REGISTER_METHOD(0x01A9B160, app::MemoryStream*, SerializeObject, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01A9B4A0, app::Object*, DeserializeObject, app::MemoryStream* mem)
} // namespace app::classes::System::Runtime::Remoting::Channels::CADSerializer
