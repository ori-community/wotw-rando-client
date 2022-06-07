#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Reflection::Missing {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Missing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268DCE0, void, ISerializable_GetObjectData, (app::Missing * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0472E090, Missing_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268DE40, void, cctor, ())
}
