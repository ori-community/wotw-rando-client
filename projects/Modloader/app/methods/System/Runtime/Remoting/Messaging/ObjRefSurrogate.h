#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjRefSurrogate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/ISurrogateSelector.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ObjRefSurrogate {
    IL2CPP_REGISTER_METHOD(0x02319050, void, GetObjectData, (app::ObjRefSurrogate * this_ptr, app::Object* obj, app::SerializationInfo* si, app::StreamingContext sc))
    IL2CPP_REGISTER_METHODINFO(0x047551F8, ObjRefSurrogate_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02319170, app::Object*, SetObjectData, (app::ObjRefSurrogate * this_ptr, app::Object* obj, app::SerializationInfo* si, app::StreamingContext sc, app::ISurrogateSelector* selector))
    IL2CPP_REGISTER_METHODINFO(0x047786B0, ObjRefSurrogate_SetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ObjRefSurrogate * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Messaging::ObjRefSurrogate
