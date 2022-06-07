#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Linq::NameSerializer {
    IL2CPP_REGISTER_METHOD(0x0302C390, void, ctor, (app::NameSerializer * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0470FAA0, NameSerializer__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0302C460, app::Object *, IObjectReference_GetRealObject, (app::NameSerializer * this_ptr, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0302C470, void, ISerializable_GetObjectData, (app::NameSerializer * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04771CC8, NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo)
}
