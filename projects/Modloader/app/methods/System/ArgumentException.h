#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ArgumentException {
    IL2CPP_REGISTER_METHOD(0x022901E0, void, ctor_1, (app::ArgumentException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEFCD0, void, ctor_2, (app::ArgumentException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01FEFCF0, void, ctor_3, (app::ArgumentException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x02290270, void, ctor_4, (app::ArgumentException * this_ptr, app::String* message, app::String* param_name, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x022902B0, void, ctor_5, (app::ArgumentException * this_ptr, app::String* message, app::String* param_name))
    IL2CPP_REGISTER_METHOD(0x022902F0, void, ctor_6, (app::ArgumentException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x022903C0, app::String*, get_Message, (app::ArgumentException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02290500, void, GetObjectData, (app::ArgumentException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04719938, ArgumentException_GetObjectData__MethodInfo)
} // namespace app::classes::System::ArgumentException
