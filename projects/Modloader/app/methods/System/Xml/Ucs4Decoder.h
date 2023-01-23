#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Ucs4Decoder.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>

namespace app::classes::System::Xml::Ucs4Decoder {
    IL2CPP_REGISTER_METHOD(0x019512C0, int32_t, GetCharCount, (app::Ucs4Decoder * this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x019512D0, int32_t, GetChars, (app::Ucs4Decoder * this_ptr, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count, app::Char__Array* chars, int32_t char_index))
    IL2CPP_REGISTER_METHOD(0x019514D0, void, Convert, (app::Ucs4Decoder * this_ptr, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count, app::Char__Array* chars, int32_t char_index, int32_t char_count, bool flush, int32_t* bytes_used, int32_t* chars_used, bool* completed))
    IL2CPP_REGISTER_METHOD(0x01951750, void, Ucs4ToUTF16, (app::Ucs4Decoder * this_ptr, uint32_t code, app::Char__Array* chars, int32_t char_index))
    IL2CPP_REGISTER_METHOD(0x019517E0, void, ctor, (app::Ucs4Decoder * this_ptr))
} // namespace app::classes::System::Xml::Ucs4Decoder
