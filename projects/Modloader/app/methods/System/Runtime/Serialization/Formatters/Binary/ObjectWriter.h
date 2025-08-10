#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/FormatterTypeStyle__Enum.h>
#include <Modloader/app/structs/Header__Array.h>
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/InternalFE.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>
#include <Modloader/app/structs/NameInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectWriter.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SerializationBinder.h>
#include <Modloader/app/structs/SerializationObjectManager.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/WriteObjectInfo.h>
#include <Modloader/app/structs/WriteObjectInfo__Array.h>
#include <Modloader/app/structs/_BinaryWriter.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectWriter {
    IL2CPP_REGISTER_METHOD(
        0x01D9A180,
        void,
        ctor,
        app::ObjectWriter* this_ptr,
        app::ISurrogateSelector* selector,
        app::StreamingContext context,
        app::InternalFE* formatter_enums,
        app::SerializationBinder* binder
    )
    IL2CPP_REGISTER_METHOD(
        0x01D9A3F0,
        void,
        Serialize,
        app::ObjectWriter* this_ptr,
        app::Object* graph,
        app::Header__Array* in_headers,
        app::_BinaryWriter* ser_writer,
        bool f_check
    )
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::SerializationObjectManager*, get_ObjectManager, app::ObjectWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D9ABB0,
        void,
        Write_1,
        app::ObjectWriter* this_ptr,
        app::WriteObjectInfo* object_info,
        app::NameInfo* member_name_info,
        app::NameInfo* type_name_info
    )
    IL2CPP_REGISTER_METHOD(
        0x01D9B1F0,
        void,
        Write_2,
        app::ObjectWriter* this_ptr,
        app::WriteObjectInfo* object_info,
        app::NameInfo* member_name_info,
        app::NameInfo* type_name_info,
        app::String__Array* member_names,
        app::Type__Array* member_types,
        app::Object__Array* member_data,
        app::WriteObjectInfo__Array* member_object_infos
    )
    IL2CPP_REGISTER_METHOD(
        0x01D9B670,
        void,
        WriteMemberSetup,
        app::ObjectWriter* this_ptr,
        app::WriteObjectInfo* object_info,
        app::NameInfo* member_name_info,
        app::NameInfo* type_name_info,
        app::String* member_name,
        app::Type* member_type,
        app::Object* member_data,
        app::WriteObjectInfo* member_object_info
    )
    IL2CPP_REGISTER_METHOD(
        0x01D9B7E0,
        void,
        WriteMembers,
        app::ObjectWriter* this_ptr,
        app::NameInfo* member_name_info,
        app::NameInfo* member_type_name_info,
        app::Object* member_data,
        app::WriteObjectInfo* object_info,
        app::NameInfo* type_name_info,
        app::WriteObjectInfo* member_object_info
    )
    IL2CPP_REGISTER_METHOD(
        0x01D9BCB0,
        void,
        WriteArray,
        app::ObjectWriter* this_ptr,
        app::WriteObjectInfo* object_info,
        app::NameInfo* member_name_info,
        app::WriteObjectInfo* member_object_info
    )
    IL2CPP_REGISTER_METHOD(
        0x01D9C840,
        void,
        WriteArrayMember,
        app::ObjectWriter* this_ptr,
        app::WriteObjectInfo* object_info,
        app::NameInfo* array_elem_type_name_info,
        app::Object* data
    )
    IL2CPP_REGISTER_METHOD(
        0x01D9CC50,
        void,
        WriteRectangle,
        app::ObjectWriter* this_ptr,
        app::WriteObjectInfo* object_info,
        int32_t rank,
        app::Int32__Array* max_a,
        app::Array* array,
        app::NameInfo* array_elem_name_type_info,
        app::Int32__Array* lower_bound_a
    )
    IL2CPP_REGISTER_METHOD(0x01D9CF40, app::Object*, GetNext, app::ObjectWriter* this_ptr, int64_t* obj_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01D9D110,
        int64_t,
        InternalGetId,
        app::ObjectWriter* this_ptr,
        app::Object* obj,
        bool assign_unique_id_to_value_type,
        app::Type* type,
        bool* is_new
    )
    IL2CPP_REGISTER_METHOD(0x01D9D200, int64_t, Schedule_1, app::ObjectWriter* this_ptr, app::Object* obj, bool assign_unique_id_to_value_type, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x01D9D280,
        int64_t,
        Schedule_2,
        app::ObjectWriter* this_ptr,
        app::Object* obj,
        bool assign_unique_id_to_value_type,
        app::Type* type,
        app::WriteObjectInfo* object_info
    )
    IL2CPP_REGISTER_METHOD(
        0x01D9D330,
        bool,
        WriteKnownValueClass,
        app::ObjectWriter* this_ptr,
        app::NameInfo* member_name_info,
        app::NameInfo* type_name_info,
        app::Object* data
    )
    IL2CPP_REGISTER_METHOD(0x01D9D4A0, void, WriteObjectRef, app::ObjectWriter* this_ptr, app::NameInfo* name_info, int64_t object_id)
    IL2CPP_REGISTER_METHOD(
        0x01D9D4C0,
        void,
        WriteString,
        app::ObjectWriter* this_ptr,
        app::NameInfo* member_name_info,
        app::NameInfo* type_name_info,
        app::Object* string_object
    )
    IL2CPP_REGISTER_METHOD(
        0x01D9D680,
        bool,
        CheckForNull,
        app::ObjectWriter* this_ptr,
        app::WriteObjectInfo* object_info,
        app::NameInfo* member_name_info,
        app::NameInfo* type_name_info,
        app::Object* data
    )
    IL2CPP_REGISTER_METHOD(0x01D9D780, void, WriteSerializedStreamHeader, app::ObjectWriter* this_ptr, int64_t top_id, int64_t header_id)
    IL2CPP_REGISTER_METHOD(
        0x01D9D7B0,
        app::NameInfo*,
        TypeToNameInfo_1,
        app::ObjectWriter* this_ptr,
        app::Type* type,
        app::WriteObjectInfo* object_info,
        app::InternalPrimitiveTypeE__Enum code,
        app::NameInfo* name_info
    )
    IL2CPP_REGISTER_METHOD(0x01D9D870, app::NameInfo*, TypeToNameInfo_2, app::ObjectWriter* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01D9D8C0, app::NameInfo*, TypeToNameInfo_3, app::ObjectWriter* this_ptr, app::WriteObjectInfo* object_info)
    IL2CPP_REGISTER_METHOD(
        0x01D9D970,
        app::NameInfo*,
        TypeToNameInfo_4,
        app::ObjectWriter* this_ptr,
        app::WriteObjectInfo* object_info,
        app::NameInfo* name_info
    )
    IL2CPP_REGISTER_METHOD(0x01D9D9E0, void, TypeToNameInfo_5, app::ObjectWriter* this_ptr, app::Type* type, app::NameInfo* name_info)
    IL2CPP_REGISTER_METHOD(0x01D9DA70, app::NameInfo*, MemberToNameInfo, app::ObjectWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01D9DAA0, app::InternalPrimitiveTypeE__Enum, ToCode, app::ObjectWriter* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01D9DB80, int64_t, GetAssemblyId, app::ObjectWriter* this_ptr, app::WriteObjectInfo* object_info)
    IL2CPP_REGISTER_METHOD(0x013DD8B0, app::Type*, GetType, app::ObjectWriter* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01D9DF40, app::NameInfo*, GetNameInfo, app::ObjectWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01141CD0,
        bool,
        CheckTypeFormat,
        app::ObjectWriter* this_ptr,
        app::FormatterTypeStyle__Enum test,
        app::FormatterTypeStyle__Enum want
    )
    IL2CPP_REGISTER_METHOD(0x01D9E110, void, PutNameInfo, app::ObjectWriter* this_ptr, app::NameInfo* name_info)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectWriter
