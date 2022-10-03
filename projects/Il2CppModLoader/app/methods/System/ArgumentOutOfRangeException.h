#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ArgumentOutOfRangeException {
    IL2CPP_REGISTER_METHOD(0x022907B0, app::String*, get_RangeMessage, ())
    IL2CPP_REGISTER_METHOD(0x02290870, void, ctor_1, (app::ArgumentOutOfRangeException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022908A0, void, ctor_2, (app::ArgumentOutOfRangeException * this_ptr, app::String* param_name))
    IL2CPP_REGISTER_METHOD(0x022908E0, void, ctor_3, (app::ArgumentOutOfRangeException * this_ptr, app::String* param_name, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02290920, void, ctor_4, (app::ArgumentOutOfRangeException * this_ptr, app::String* param_name, app::Object* actual_value, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02290970, app::String*, get_Message, (app::ArgumentOutOfRangeException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02290AD0, void, GetObjectData, (app::ArgumentOutOfRangeException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04757F30, ArgumentOutOfRangeException_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02290C10, void, ctor_5, (app::ArgumentOutOfRangeException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::ArgumentOutOfRangeException
