#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Empty.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Empty {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Empty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A10A30, app::String*, ToString, (app::Empty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A10AB0, void, GetObjectData, (app::Empty * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0470BFA8, Empty_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A10B80, void, cctor, ())
} // namespace app::classes::System::Empty
