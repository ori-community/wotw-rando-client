#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::IO::FileNotFoundException {
    IL2CPP_REGISTER_METHOD(0x01E09550, void, ctor_1, (app::FileNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E095E0, void, ctor_2, (app::FileNotFoundException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01E09600, void, ctor_3, (app::FileNotFoundException * this_ptr, app::String* message, app::String* file_name))
    IL2CPP_REGISTER_METHOD(0x01E09640, app::String*, get_Message, (app::FileNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E09700, void, SetMessageField, (app::FileNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E097B0, app::String*, ToString, (app::FileNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E09A70, void, ctor_4, (app::FileNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::String*, get_FusionLog, (app::FileNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E09B80, void, GetObjectData, (app::FileNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::IO::FileNotFoundException
