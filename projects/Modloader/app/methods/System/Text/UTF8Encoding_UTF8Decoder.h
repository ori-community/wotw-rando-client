#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/UTF8Encoding.h>
#include <Modloader/app/structs/UTF8Encoding_UTF8Decoder.h>

namespace app::classes::System::Text::UTF8Encoding_UTF8Decoder {
    IL2CPP_REGISTER_METHOD(0x0244A470, void, ctor_1, app::UTF8Encoding_UTF8Decoder* this_ptr, app::UTF8Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x027D26A0, void, ctor_2, app::UTF8Encoding_UTF8Decoder* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x027D2930,
        void,
        ISerializable_GetObjectData,
        app::UTF8Encoding_UTF8Decoder* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x027D2A80, void, Reset, app::UTF8Encoding_UTF8Decoder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019A42C0, bool, get_HasState, app::UTF8Encoding_UTF8Decoder* this_ptr)
} // namespace app::classes::System::Text::UTF8Encoding_UTF8Decoder
