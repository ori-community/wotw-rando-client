#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/UTF7Encoding.h>
#include <Modloader/app/structs/UTF7Encoding_Encoder.h>

namespace app::classes::System::Text::UTF7Encoding_Encoder {
    IL2CPP_REGISTER_METHOD(0x0244DBE0, void, ctor_1, app::UTF7Encoding_Encoder* this_ptr, app::UTF7Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x027CDF60, void, ctor_2, app::UTF7Encoding_Encoder* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x027CE190,
        void,
        ISerializable_GetObjectData,
        app::UTF7Encoding_Encoder* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x027CE290, void, Reset, app::UTF7Encoding_Encoder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027CE2C0, bool, get_HasState, app::UTF7Encoding_Encoder* this_ptr)
} // namespace app::classes::System::Text::UTF7Encoding_Encoder
