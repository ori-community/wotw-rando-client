#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UriFormatException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::UriFormatException {
    IL2CPP_REGISTER_METHOD(0x01EA7840, void, ctor_1, (app::UriFormatException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1CA20, void, ctor_2, (app::UriFormatException * this_ptr, app::String* text_string))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::UriFormatException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01BCD870, void, ISerializable_GetObjectData, (app::UriFormatException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
} // namespace app::classes::System::UriFormatException
