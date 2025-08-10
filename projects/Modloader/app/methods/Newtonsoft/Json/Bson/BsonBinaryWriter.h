#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BsonBinaryWriter.h>
#include <Modloader/app/structs/BsonToken.h>
#include <Modloader/app/structs/DateTimeKind__Enum.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonBinaryWriter {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::DateTimeKind__Enum, get_DateTimeKindHandling, app::BsonBinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A488A0, void, Close, app::BsonBinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A488D0, void, WriteToken, app::BsonBinaryWriter* this_ptr, app::BsonToken* t)
    IL2CPP_REGISTER_METHOD(0x01A48900, void, WriteTokenInternal, app::BsonBinaryWriter* this_ptr, app::BsonToken* t)
    IL2CPP_REGISTER_METHOD(
        0x01A494F0,
        void,
        WriteString,
        app::BsonBinaryWriter* this_ptr,
        app::String* s,
        int32_t byte_count,
        app::Nullable_1_Int32_ calculatedlength_prefix
    )
    IL2CPP_REGISTER_METHOD(0x01A495F0, void, WriteUtf8Bytes, app::BsonBinaryWriter* this_ptr, app::String* s, int32_t byte_count)
    IL2CPP_REGISTER_METHOD(0x01A497D0, int32_t, CalculateSize_1, app::BsonBinaryWriter* this_ptr, int32_t string_byte_count)
    IL2CPP_REGISTER_METHOD(0x01A497E0, int32_t, CalculateSizeWithLength, app::BsonBinaryWriter* this_ptr, int32_t string_byte_count, bool include_size)
    IL2CPP_REGISTER_METHOD(0x01A497F0, int32_t, CalculateSize_2, app::BsonBinaryWriter* this_ptr, app::BsonToken* t)
    IL2CPP_REGISTER_METHOD(0x01A49DC0, void, cctor, )
} // namespace app::classes::Newtonsoft::Json::Bson::BsonBinaryWriter
