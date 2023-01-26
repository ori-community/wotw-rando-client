#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameSerializer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Xml::Linq::NameSerializer {
    IL2CPP_REGISTER_METHOD(0x0302C390, void, ctor, (app::NameSerializer * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0302C460, app::Object*, IObjectReference_GetRealObject, (app::NameSerializer * this_ptr, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0302C470, void, ISerializable_GetObjectData, (app::NameSerializer * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Xml::Linq::NameSerializer
