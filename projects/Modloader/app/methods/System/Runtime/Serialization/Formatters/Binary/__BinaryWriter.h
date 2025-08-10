#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/FormatterTypeStyle__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>
#include <Modloader/app/structs/NameInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectWriter.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/WriteObjectInfo.h>
#include <Modloader/app/structs/WriteObjectInfo__Array.h>
#include <Modloader/app/structs/_BinaryWriter.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter {
    IL2CPP_REGISTER_METHOD(
        0x01ED1880,
        void,
        ctor,
        app::_BinaryWriter* this_ptr,
        app::Stream* sout,
        app::ObjectWriter* object_writer,
        app::FormatterTypeStyle__Enum formatter_type_style
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteBegin, app::_BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D612D0, void, WriteEnd, app::_BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED1A10, void, WriteBoolean, app::_BinaryWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01ED1A40, void, WriteByte, app::_BinaryWriter* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01D61480, void, WriteBytes_1, app::_BinaryWriter* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x01ED1A70, void, WriteBytes_2, app::_BinaryWriter* this_ptr, app::Byte__Array* byte_a, int32_t offset, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01D61390, void, WriteChar, app::_BinaryWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01ED1AA0, void, WriteChars, app::_BinaryWriter* this_ptr, app::Char__Array* value)
    IL2CPP_REGISTER_METHOD(0x01ED1AD0, void, WriteDecimal, app::_BinaryWriter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01ED1BC0, void, WriteSingle, app::_BinaryWriter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01D613F0, void, WriteDouble, app::_BinaryWriter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x01ED1BF0, void, WriteInt16, app::_BinaryWriter* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01ED1C20, void, WriteInt32, app::_BinaryWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01ED1C50, void, WriteInt64, app::_BinaryWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01ED1A40, void, WriteSByte, app::_BinaryWriter* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01ED1C80, void, WriteString, app::_BinaryWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01ED1C50, void, WriteTimeSpan, app::_BinaryWriter* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01ED1C50, void, WriteDateTime, app::_BinaryWriter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x01ED1CB0, void, WriteUInt16, app::_BinaryWriter* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01ED1CE0, void, WriteUInt32, app::_BinaryWriter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x01D61600, void, WriteUInt64, app::_BinaryWriter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteObjectEnd, app::_BinaryWriter* this_ptr, app::NameInfo* member_name_info, app::NameInfo* type_name_info)
    IL2CPP_REGISTER_METHOD(0x01ED1D10, void, WriteSerializationHeaderEnd, app::_BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01ED1E80,
        void,
        WriteSerializationHeader,
        app::_BinaryWriter* this_ptr,
        int32_t top_id,
        int32_t header_id,
        int32_t minor_version,
        int32_t major_version
    )
    IL2CPP_REGISTER_METHOD(0x01ED20C0, void, WriteMethodCall, app::_BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED2230, void, WriteMethodReturn, app::_BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01ED23A0,
        void,
        WriteObject,
        app::_BinaryWriter* this_ptr,
        app::NameInfo* name_info,
        app::NameInfo* type_name_info,
        int32_t num_members,
        app::String__Array* member_names,
        app::Type__Array* member_types,
        app::WriteObjectInfo__Array* member_object_infos
    )
    IL2CPP_REGISTER_METHOD(0x01ED2F10, void, WriteObjectString, app::_BinaryWriter* this_ptr, int32_t object_id, app::String* value)
    IL2CPP_REGISTER_METHOD(
        0x01ED3110,
        void,
        WriteSingleArray,
        app::_BinaryWriter* this_ptr,
        app::NameInfo* member_name_info,
        app::NameInfo* array_name_info,
        app::WriteObjectInfo* object_info,
        app::NameInfo* array_elem_type_name_info,
        int32_t length,
        int32_t lower_bound,
        app::Array* array
    )
    IL2CPP_REGISTER_METHOD(0x01ED3590, void, WriteArrayAsBytes, app::_BinaryWriter* this_ptr, app::Array* array, int32_t type_length)
    IL2CPP_REGISTER_METHOD(
        0x01ED3870,
        void,
        WriteJaggedArray,
        app::_BinaryWriter* this_ptr,
        app::NameInfo* member_name_info,
        app::NameInfo* array_name_info,
        app::WriteObjectInfo* object_info,
        app::NameInfo* array_elem_type_name_info,
        int32_t length,
        int32_t lower_bound
    )
    IL2CPP_REGISTER_METHOD(
        0x01ED3B90,
        void,
        WriteRectangleArray,
        app::_BinaryWriter* this_ptr,
        app::NameInfo* member_name_info,
        app::NameInfo* array_name_info,
        app::WriteObjectInfo* object_info,
        app::NameInfo* array_elem_type_name_info,
        int32_t rank,
        app::Int32__Array* length_a,
        app::Int32__Array* lower_bound_a
    )
    IL2CPP_REGISTER_METHOD(
        0x01ED3E70,
        void,
        WriteObjectByteArray,
        app::_BinaryWriter* this_ptr,
        app::NameInfo* member_name_info,
        app::NameInfo* array_name_info,
        app::WriteObjectInfo* object_info,
        app::NameInfo* array_elem_type_name_info,
        int32_t length,
        int32_t lower_bound,
        app::Byte__Array* byte_a
    )
    IL2CPP_REGISTER_METHOD(
        0x01ED3ED0,
        void,
        WriteMember,
        app::_BinaryWriter* this_ptr,
        app::NameInfo* member_name_info,
        app::NameInfo* type_name_info,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x01ED4200, void, WriteNullMember, app::_BinaryWriter* this_ptr, app::NameInfo* member_name_info, app::NameInfo* type_name_info)
    IL2CPP_REGISTER_METHOD(0x01ED43B0, void, WriteMemberObjectRef, app::_BinaryWriter* this_ptr, app::NameInfo* member_name_info, int32_t id_ref)
    IL2CPP_REGISTER_METHOD(0x01ED4590, void, WriteMemberNested, app::_BinaryWriter* this_ptr, app::NameInfo* member_name_info)
    IL2CPP_REGISTER_METHOD(
        0x01ED45C0,
        void,
        WriteMemberString,
        app::_BinaryWriter* this_ptr,
        app::NameInfo* member_name_info,
        app::NameInfo* type_name_info,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(
        0x01ED4630,
        void,
        WriteItem,
        app::_BinaryWriter* this_ptr,
        app::NameInfo* item_name_info,
        app::NameInfo* type_name_info,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x01ED4690, void, WriteNullItem, app::_BinaryWriter* this_ptr, app::NameInfo* item_name_info, app::NameInfo* type_name_info)
    IL2CPP_REGISTER_METHOD(0x01ED46A0, void, WriteDelayedNullItem, app::_BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED46B0, void, WriteItemEnd, app::_BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED46C0, void, InternalWriteItemNull, app::_BinaryWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED4850, void, WriteItemObjectRef, app::_BinaryWriter* this_ptr, app::NameInfo* name_info, int32_t id_ref)
    IL2CPP_REGISTER_METHOD(
        0x01ED4890,
        void,
        WriteAssembly,
        app::_BinaryWriter* this_ptr,
        app::Type* type,
        app::String* assembly_string,
        int32_t assem_id,
        bool is_new
    )
    IL2CPP_REGISTER_METHOD(0x01ED4AB0, void, WriteValue, app::_BinaryWriter* this_ptr, app::InternalPrimitiveTypeE__Enum code, app::Object* value)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter
