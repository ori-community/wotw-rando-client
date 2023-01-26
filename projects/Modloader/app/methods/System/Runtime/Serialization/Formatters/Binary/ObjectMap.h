#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectMap.h>
#include <Modloader/app/structs/BinaryAssemblyInfo.h>
#include <Modloader/app/structs/BinaryTypeEnum__Enum__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/ObjectReader.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ReadObjectInfo.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/SizedArray.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectMap {
    IL2CPP_REGISTER_METHOD(0x01D93850, void, ctor_1, (app::ObjectMap * this_ptr, app::String* object_name, app::Type* object_type, app::String__Array* member_names, app::ObjectReader* object_reader, int32_t object_id, app::BinaryAssemblyInfo* assembly_info))
    IL2CPP_REGISTER_METHOD(0x01D93B40, void, ctor_2, (app::ObjectMap * this_ptr, app::String* object_name, app::String__Array* member_names, app::BinaryTypeEnum__Enum__Array* binary_type_enum_a, app::Object__Array* type_information_a, app::Int32__Array* member_assem_ids, app::ObjectReader* object_reader, int32_t object_id, app::BinaryAssemblyInfo* assembly_info, app::SizedArray* assem_id_to_assembly_table))
    IL2CPP_REGISTER_METHOD(0x01D93F90, app::ReadObjectInfo*, CreateObjectInfo, (app::ObjectMap * this_ptr, app::SerializationInfo** si, app::Object__Array** member_data))
    IL2CPP_REGISTER_METHOD(0x01D93FF0, app::ObjectMap*, Create_1, (app::String * name, app::Type* object_type, app::String__Array* member_names, app::ObjectReader* object_reader, int32_t object_id, app::BinaryAssemblyInfo* assembly_info))
    IL2CPP_REGISTER_METHOD(0x01D94180, app::ObjectMap*, Create_2, (app::String * name, app::String__Array* member_names, app::BinaryTypeEnum__Enum__Array* binary_type_enum_a, app::Object__Array* type_information_a, app::Int32__Array* member_assem_ids, app::ObjectReader* object_reader, int32_t object_id, app::BinaryAssemblyInfo* assembly_info, app::SizedArray* assem_id_to_assembly_table))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectMap
