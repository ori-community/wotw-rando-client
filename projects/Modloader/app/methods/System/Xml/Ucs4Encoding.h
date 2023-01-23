#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Ucs4Encoding.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Encoder.h>
#include <Modloader/app/structs/Encoding.h>

namespace app::classes::System::Xml::Ucs4Encoding {
    IL2CPP_REGISTER_METHOD(0x0173D7B0, app::String*, get_WebName, (app::Ucs4Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Decoder*, GetDecoder, (app::Ucs4Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01952400, int32_t, GetByteCount, (app::Ucs4Encoding * this_ptr, app::Char__Array* chars, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0475BEB0, Ucs4Encoding_GetByteCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Byte__Array*, GetBytes_1, (app::Ucs4Encoding * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetBytes_2, (app::Ucs4Encoding * this_ptr, app::Char__Array* chars, int32_t char_index, int32_t char_count, app::Byte__Array* bytes, int32_t byte_index))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetMaxByteCount, (app::Ucs4Encoding * this_ptr, int32_t char_count))
    IL2CPP_REGISTER_METHOD(0x019524A0, int32_t, GetCharCount, (app::Ucs4Encoding * this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x019524D0, int32_t, GetChars, (app::Ucs4Encoding * this_ptr, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count, app::Char__Array* chars, int32_t char_index))
    IL2CPP_REGISTER_METHOD(0x01952500, int32_t, GetMaxCharCount, (app::Ucs4Encoding * this_ptr, int32_t byte_count))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_CodePage, (app::Ucs4Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Encoder*, GetEncoder, (app::Ucs4Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01952510, app::Encoding*, get_UCS4_Littleendian, ())
    IL2CPP_REGISTER_METHOD(0x01952650, app::Encoding*, get_UCS4_Bigendian, ())
    IL2CPP_REGISTER_METHOD(0x01952790, app::Encoding*, get_UCS4_2143, ())
    IL2CPP_REGISTER_METHOD(0x019528D0, app::Encoding*, get_UCS4_3412, ())
    IL2CPP_REGISTER_METHOD(0x01952A10, void, ctor, (app::Ucs4Encoding * this_ptr))
} // namespace app::classes::System::Xml::Ucs4Encoding
