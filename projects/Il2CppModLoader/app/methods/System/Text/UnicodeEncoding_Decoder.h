#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Text::UnicodeEncoding_Decoder {
    IL2CPP_REGISTER_METHOD(0x027D7930, void, ctor_1, (app::UnicodeEncoding_Decoder * this_ptr, app::UnicodeEncoding* encoding))
    IL2CPP_REGISTER_METHOD(0x027D7970, void, ctor_2, (app::UnicodeEncoding_Decoder * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04766A78, UnicodeEncoding_Decoder__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D7DB0, void, ISerializable_GetObjectData, (app::UnicodeEncoding_Decoder * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04741518, UnicodeEncoding_Decoder_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D7F80, void, Reset, (app::UnicodeEncoding_Decoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027D7FB0, bool, get_HasState, (app::UnicodeEncoding_Decoder * this_ptr))
} // namespace app::classes::System::Text::UnicodeEncoding_Decoder
