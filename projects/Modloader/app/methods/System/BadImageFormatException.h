#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::BadImageFormatException {
    IL2CPP_REGISTER_METHOD(0x0229BCD0, void, ctor_1, (app::BadImageFormatException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0229BD60, void, ctor_2, (app::BadImageFormatException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0229BD80, void, ctor_3, (app::BadImageFormatException * this_ptr, app::String* message, app::Exception* inner))
    IL2CPP_REGISTER_METHOD(0x0229BDA0, void, ctor_4, (app::BadImageFormatException * this_ptr, app::String* message, app::String* file_name))
    IL2CPP_REGISTER_METHOD(0x0229BDE0, app::String*, get_Message, (app::BadImageFormatException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0229BEA0, void, SetMessageField, (app::BadImageFormatException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0229BF50, app::String*, ToString, (app::BadImageFormatException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0229C210, void, ctor_5, (app::BadImageFormatException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_FusionLog, (app::BadImageFormatException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0229C320, void, GetObjectData, (app::BadImageFormatException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::BadImageFormatException
