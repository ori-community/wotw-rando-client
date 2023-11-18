#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Missing.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Reflection::Missing {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Missing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268DCE0, void, ISerializable_GetObjectData, (app::Missing * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0268DE40, void, cctor, ())
} // namespace app::classes::System::Reflection::Missing
