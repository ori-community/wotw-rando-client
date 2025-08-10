#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Base64Encoder_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/TextWriter.h>

namespace app::classes::Newtonsoft::Json::Utilities::Base64Encoder {
    IL2CPP_REGISTER_METHOD(0x01BFFFC0, void, ctor, app::Base64Encoder_1* this_ptr, app::TextWriter* writer)
    IL2CPP_REGISTER_METHOD(0x01C00070, void, ValidateEncode, app::Base64Encoder_1* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01C001E0, void, Encode, app::Base64Encoder_1* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01C00680, void, StoreLeftOverBytes, app::Base64Encoder_1* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t* count)
    IL2CPP_REGISTER_METHOD(0x01C007C0, bool, FulfillFromLeftover, app::Base64Encoder_1* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t* count)
    IL2CPP_REGISTER_METHOD(0x01C00880, void, Flush, app::Base64Encoder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C00990, void, WriteChars, app::Base64Encoder_1* this_ptr, app::Char__Array* chars, int32_t index, int32_t count)
} // namespace app::classes::Newtonsoft::Json::Utilities::Base64Encoder
