#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/JContainer.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/JTokenWriter.h>
#include <Modloader/app/structs/JValue.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonToken__Enum_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::Newtonsoft::Json::Linq::JTokenWriter {
    IL2CPP_REGISTER_METHOD(0x01858240, app::JToken*, get_Token, app::JTokenWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01858250, void, ctor, app::JTokenWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01858300, void, Close, app::JTokenWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01858350, void, WriteStartObject, app::JTokenWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018584D0, void, AddParent, app::JTokenWriter* this_ptr, app::JContainer* container)
    IL2CPP_REGISTER_METHOD(0x018585C0, void, RemoveParent, app::JTokenWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01858620, void, WriteStartArray, app::JTokenWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018587A0, void, WriteStartConstructor, app::JTokenWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x018585C0, void, WriteEnd, app::JTokenWriter* this_ptr, app::JsonToken__Enum_1 token)
    IL2CPP_REGISTER_METHOD(0x01858920, void, WritePropertyName, app::JTokenWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01858BA0, void, AddValue_1, app::JTokenWriter* this_ptr, app::Object* value, app::JsonToken__Enum_1 token)
    IL2CPP_REGISTER_METHOD(0x01858D30, void, AddValue_2, app::JTokenWriter* this_ptr, app::JValue* value, app::JsonToken__Enum_1 token)
    IL2CPP_REGISTER_METHOD(0x01858DE0, void, WriteValue_1, app::JTokenWriter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01858ED0, void, WriteNull, app::JTokenWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01858F80, void, WriteUndefined, app::JTokenWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01859030, void, WriteRaw, app::JTokenWriter* this_ptr, app::String* json)
    IL2CPP_REGISTER_METHOD(0x018591A0, void, WriteComment, app::JTokenWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x018591F0, void, WriteValue_2, app::JTokenWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01859240, void, WriteValue_3, app::JTokenWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01859300, void, WriteValue_4, app::JTokenWriter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x018593C0, void, WriteValue_5, app::JTokenWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01859480, void, WriteValue_6, app::JTokenWriter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x01859540, void, WriteValue_7, app::JTokenWriter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01859600, void, WriteValue_8, app::JTokenWriter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x018596C0, void, WriteValue_9, app::JTokenWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01859780, void, WriteValue_10, app::JTokenWriter* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01859840, void, WriteValue_11, app::JTokenWriter* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01859900, void, WriteValue_12, app::JTokenWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x018599D0, void, WriteValue_13, app::JTokenWriter* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01859A90, void, WriteValue_14, app::JTokenWriter* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01859B50, void, WriteValue_15, app::JTokenWriter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01859C20, void, WriteValue_16, app::JTokenWriter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x01859D10, void, WriteValue_17, app::JTokenWriter* this_ptr, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x01859DE0, void, WriteValue_18, app::JTokenWriter* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x01859E40, void, WriteValue_19, app::JTokenWriter* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01859F00, void, WriteValue_20, app::JTokenWriter* this_ptr, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x01859FD0, void, WriteValue_21, app::JTokenWriter* this_ptr, app::Uri* value)
    IL2CPP_REGISTER_METHOD(
        0x0185A010,
        void,
        WriteToken,
        app::JTokenWriter* this_ptr,
        app::JsonReader* reader,
        bool write_children,
        bool write_date_constructor_as_date,
        bool write_comments
    )
} // namespace app::classes::Newtonsoft::Json::Linq::JTokenWriter
