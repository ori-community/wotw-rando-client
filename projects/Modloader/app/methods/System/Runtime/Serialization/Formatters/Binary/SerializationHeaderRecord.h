#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SerializationHeaderRecord.h>
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#include <Modloader/app/structs/_BinaryWriter.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/_BinaryParser.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord {
    IL2CPP_REGISTER_METHOD(0x00D34AF0, void, ctor_1, (app::SerializationHeaderRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA1550, void, ctor_2, (app::SerializationHeaderRecord * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum, int32_t top_id, int32_t header_id, int32_t major_version, int32_t minor_version))
    IL2CPP_REGISTER_METHOD(0x01DA1580, void, Write, (app::SerializationHeaderRecord * this_ptr, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHOD(0x01B5AAD0, int32_t, GetInt32, (app::Byte__Array * buffer, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01DA1670, void, Read, (app::SerializationHeaderRecord * this_ptr, app::_BinaryParser* input))
    IL2CPP_REGISTER_METHODINFO(0x04783700, SerializationHeaderRecord_Read__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::SerializationHeaderRecord * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord
