#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BinaryTypeEnum__Enum.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/WriteObjectInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ObjectWriter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/_BinaryWriter.h>
#include <Modloader/app/structs/_BinaryParser.h>
#include <Modloader/app/structs/ObjectReader.h>
#include <Modloader/app/structs/BinaryAssemblyInfo.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryConverter {
    IL2CPP_REGISTER_METHOD(0x01D8C320, app::BinaryTypeEnum__Enum, GetBinaryTypeInfo, (app::Type * type, app::WriteObjectInfo* object_info, app::String* type_name, app::ObjectWriter* object_writer, app::Object** type_information, int32_t* assem_id))
    IL2CPP_REGISTER_METHODINFO(0x047633A8, BinaryConverter_GetBinaryTypeInfo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8C6E0, app::BinaryTypeEnum__Enum, GetParserBinaryTypeInfo, (app::Type * type, app::Object** type_information))
    IL2CPP_REGISTER_METHOD(0x01D8C9B0, void, WriteTypeInfo, (app::BinaryTypeEnum__Enum binary_type_enum, app::Object* type_information, int32_t assem_id, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHODINFO(0x04766028, BinaryConverter_WriteTypeInfo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8CC70, app::Object*, ReadTypeInfo, (app::BinaryTypeEnum__Enum binary_type_enum, app::_BinaryParser* input, int32_t* assem_id))
    IL2CPP_REGISTER_METHODINFO(0x0471F5C0, BinaryConverter_ReadTypeInfo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8CED0, void, TypeFromInfo, (app::BinaryTypeEnum__Enum binary_type_enum, app::Object* type_information, app::ObjectReader* object_reader, app::BinaryAssemblyInfo* assembly_info, app::InternalPrimitiveTypeE__Enum* primitive_type_enum, app::String** type_string, app::Type** type, bool* is_variant))
    IL2CPP_REGISTER_METHODINFO(0x0478E9E0, BinaryConverter_TypeFromInfo__MethodInfo)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryConverter
