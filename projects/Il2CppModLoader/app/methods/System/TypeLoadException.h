#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::TypeLoadException {
    IL2CPP_REGISTER_METHOD(0x027C0FD0, void, ctor_1, (app::TypeLoadException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C1060, void, ctor_2, (app::TypeLoadException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x027C1080, app::String*, get_Message, (app::TypeLoadException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C10A0, void, SetMessageField, (app::TypeLoadException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C11E0, void, ctor_3, (app::TypeLoadException * this_ptr, app::String* class_name, app::String* assembly_name))
    IL2CPP_REGISTER_METHOD(0x027C1240, void, ctor_4, (app::TypeLoadException * this_ptr, app::String* class_name, app::String* assembly_name, app::String* message_arg, int32_t resource_id))
    IL2CPP_REGISTER_METHOD(0x027C12B0, void, ctor_5, (app::TypeLoadException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04774E08, TypeLoadException__ctor_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027C13F0, void, GetObjectData, (app::TypeLoadException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0476A368, TypeLoadException_GetObjectData__MethodInfo)
} // namespace app::classes::System::TypeLoadException
