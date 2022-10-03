#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Text::Encoding_DefaultEncoder {
    IL2CPP_REGISTER_METHOD(0x02453EF0, void, ctor_1, (app::Encoding_DefaultEncoder * this_ptr, app::Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x02454310, void, ctor_2, (app::Encoding_DefaultEncoder * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04718A68, Encoding_DefaultEncoder__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02454580, app::Object*, GetRealObject, (app::Encoding_DefaultEncoder * this_ptr, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x024546B0, void, ISerializable_GetObjectData, (app::Encoding_DefaultEncoder * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04714030, Encoding_DefaultEncoder_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02454780, int32_t, GetByteCount_1, (app::Encoding_DefaultEncoder * this_ptr, app::Char__Array* chars, int32_t index, int32_t count, bool flush))
    IL2CPP_REGISTER_METHOD(0x024547B0, int32_t, GetByteCount_2, (app::Encoding_DefaultEncoder * this_ptr, uint16_t* chars, int32_t count, bool flush))
    IL2CPP_REGISTER_METHOD(0x024547E0, int32_t, GetBytes_1, (app::Encoding_DefaultEncoder * this_ptr, app::Char__Array* chars, int32_t char_index, int32_t char_count, app::Byte__Array* bytes, int32_t byte_index, bool flush))
    IL2CPP_REGISTER_METHOD(0x02454810, int32_t, GetBytes_2, (app::Encoding_DefaultEncoder * this_ptr, uint16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count, bool flush))
} // namespace app::classes::System::Text::Encoding_DefaultEncoder
