#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::UTF8Encoding_UTF8Decoder {
    IL2CPP_REGISTER_METHOD(0x0244A470, void, ctor_1, (app::UTF8Encoding_UTF8Decoder * this_ptr, app::UTF8Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x027D26A0, void, ctor_2, (app::UTF8Encoding_UTF8Decoder * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047624B0, UTF8Encoding_UTF8Decoder__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D2930, void, ISerializable_GetObjectData, (app::UTF8Encoding_UTF8Decoder * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0473DBD8, UTF8Encoding_UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D2A80, void, Reset, (app::UTF8Encoding_UTF8Decoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A42C0, bool, get_HasState, (app::UTF8Encoding_UTF8Decoder * this_ptr))
} // namespace app::classes::System::Text::UTF8Encoding_UTF8Decoder
