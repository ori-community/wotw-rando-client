#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::UTF7Encoding_Decoder {
    IL2CPP_REGISTER_METHOD(0x0244A470, void, ctor_1, (app::UTF7Encoding_Decoder * this_ptr, app::UTF7Encoding * encoding))
    IL2CPP_REGISTER_METHOD(0x027CD830, void, ctor_2, (app::UTF7Encoding_Decoder * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04731108, UTF7Encoding_Decoder__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CDAC0, void, ISerializable_GetObjectData, (app::UTF7Encoding_Decoder * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04717680, UTF7Encoding_Decoder_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CDBD0, void, Reset, (app::UTF7Encoding_Decoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CDC00, bool, get_HasState, (app::UTF7Encoding_Decoder * this_ptr))
}
