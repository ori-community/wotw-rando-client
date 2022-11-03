#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::IO::FileLoadException {
    IL2CPP_REGISTER_METHOD(0x01E08E00, void, ctor_1, (app::FileLoadException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E08E90, void, ctor_2, (app::FileLoadException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01E08EB0, app::String*, get_Message, (app::FileLoadException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E08EE0, void, SetMessageField, (app::FileLoadException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E08F10, app::String*, ToString, (app::FileLoadException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E091D0, void, ctor_3, (app::FileLoadException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::String*, get_FusionLog, (app::FileLoadException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E092E0, void, GetObjectData, (app::FileLoadException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01E09450, app::String*, FormatFileLoadExceptionMessage, (app::String * file_name, int32_t h_result))
} // namespace app::classes::System::IO::FileLoadException
