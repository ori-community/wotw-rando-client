#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Channels::CADSerializer {
    IL2CPP_REGISTER_METHOD(0x01A9AC40, app::IMessage *, DeserializeMessage, (app::MemoryStream * mem, app::IMethodCallMessage * msg))
    IL2CPP_REGISTER_METHODINFO(0x04779058, CADSerializer_DeserializeMessage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A9AC90, app::MemoryStream *, SerializeMessage, (app::IMessage * msg))
    IL2CPP_REGISTER_METHOD(0x01A9AFD0, app::Object *, DeserializeObjectSafe, (app::Byte__Array * mem))
    IL2CPP_REGISTER_METHOD(0x01A9B160, app::MemoryStream *, SerializeObject, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01A9B4A0, app::Object *, DeserializeObject, (app::MemoryStream * mem))
}
