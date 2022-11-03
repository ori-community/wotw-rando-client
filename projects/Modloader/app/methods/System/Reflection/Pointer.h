#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::Pointer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::Pointer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02695560, void, ctor_2, (app::Pointer_1 * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x026956F0, app::Object*, Box, (app::Void * ptr, app::Type* type))
    IL2CPP_REGISTER_METHODINFO(0x0471D798, Pointer_1_Box__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026959A0, void, ISerializable_GetObjectData, (app::Pointer_1 * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Reflection::Pointer
