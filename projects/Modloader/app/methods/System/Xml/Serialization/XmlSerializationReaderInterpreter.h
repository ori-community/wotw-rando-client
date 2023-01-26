#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSerializationReaderInterpreter.h>
#include <Modloader/app/structs/ClassMap.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/XmlMapping.h>
#include <Modloader/app/structs/XmlMembersMapping.h>
#include <Modloader/app/structs/XmlTypeMapElementInfo.h>
#include <Modloader/app/structs/XmlTypeMapMember.h>
#include <Modloader/app/structs/XmlTypeMapping.h>

namespace app::classes::System::Xml::Serialization::XmlSerializationReaderInterpreter {
    IL2CPP_REGISTER_METHOD(0x025B30A0, void, ctor, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlMapping* type_map))
    IL2CPP_REGISTER_METHOD(0x025B30D0, void, InitCallbacks, (app::XmlSerializationReaderInterpreter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitIDs, (app::XmlSerializationReaderInterpreter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025B3550, app::Object*, ReadRoot_1, (app::XmlSerializationReaderInterpreter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025B36E0, app::Object*, ReadEncodedObject, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map))
    IL2CPP_REGISTER_METHOD(0x025B38F0, app::Object*, ReadMessage, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlMembersMapping* type_map))
    IL2CPP_REGISTER_METHOD(0x025B3EA0, app::Object*, ReadRoot_2, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* root_map))
    IL2CPP_REGISTER_METHOD(0x025B4060, app::Object*, ReadObject, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, bool is_nullable, bool check_type))
    IL2CPP_REGISTER_METHOD(0x025B4280, app::Object*, ReadClassInstance, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, bool is_nullable, bool check_type))
    IL2CPP_REGISTER_METHOD(0x025B45F0, void, ReadClassInstanceMembers, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, app::Object* ob))
    IL2CPP_REGISTER_METHOD(0x025B4700, void, ReadAttributeMembers, (app::XmlSerializationReaderInterpreter * this_ptr, app::ClassMap* map, app::Object* ob, bool is_value_list))
    IL2CPP_REGISTER_METHOD(0x025B4E20, void, ReadMembers, (app::XmlSerializationReaderInterpreter * this_ptr, app::ClassMap* map, app::Object* ob, bool is_value_list, bool read_by_soap_order))
    IL2CPP_REGISTER_METHOD(0x025B7310, void, SetListMembersDefaults, (app::XmlSerializationReaderInterpreter * this_ptr, app::ClassMap* map, app::Object* ob, bool is_value_list))
    IL2CPP_REGISTER_METHOD(0x025B7530, void, FixupMembers, (app::XmlSerializationReaderInterpreter * this_ptr, app::ClassMap* map, app::Object* obfixup, bool is_value_list))
    IL2CPP_REGISTER_METHOD(0x025B27A0, void, ProcessUnknownAttribute, (app::XmlSerializationReaderInterpreter * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHOD(0x025B27A0, void, ProcessUnknownElement, (app::XmlSerializationReaderInterpreter * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHOD(0x025B7880, bool, IsReadOnly, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapMember* member, app::TypeData* mem_type, app::Object* ob, bool is_value_list))
    IL2CPP_REGISTER_METHOD(0x025B7920, void, SetMemberValue, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapMember* member, app::Object* ob, app::Object* value, bool is_value_list))
    IL2CPP_REGISTER_METHOD(0x025B7B30, void, SetMemberValueFromAttr, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapMember* member, app::Object* ob, app::Object* value, bool is_value_list))
    IL2CPP_REGISTER_METHOD(0x025B7C90, app::Object*, GetMemberValue, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapMember* member, app::Object* ob, bool is_value_list))
    IL2CPP_REGISTER_METHOD(0x025B7DC0, app::Object*, ReadObjectElement, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapElementInfo* elem))
    IL2CPP_REGISTER_METHOD(0x025B7FC0, app::Object*, ReadPrimitiveValue, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapElementInfo* elem))
    IL2CPP_REGISTER_METHOD(0x025B8150, app::Object*, GetValueFromXmlString, (app::XmlSerializationReaderInterpreter * this_ptr, app::String* value, app::TypeData* type_data, app::XmlTypeMapping* type_map))
    IL2CPP_REGISTER_METHOD(0x025B82B0, app::Object*, ReadListElement, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, bool is_nullable, app::Object* list, bool can_create_instance))
    IL2CPP_REGISTER_METHOD(0x025B87A0, app::Object*, ReadListString, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, app::String* values))
    IL2CPP_REGISTER_METHOD(0x025B8B10, void, AddListValue, (app::XmlSerializationReaderInterpreter * this_ptr, app::TypeData* list_type, app::Object** list, int32_t index, app::Object* value, bool can_create_instance))
    IL2CPP_REGISTER_METHOD(0x025B8F00, app::Object*, CreateInstance_1, (app::Type * type, bool non_public))
    IL2CPP_REGISTER_METHOD(0x025B8F10, app::Object*, CreateInstance_2, (app::XmlSerializationReaderInterpreter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x025B8FE0, app::Object*, CreateList, (app::XmlSerializationReaderInterpreter * this_ptr, app::Type* list_type))
    IL2CPP_REGISTER_METHOD(0x025B90D0, app::Object*, InitializeList, (app::XmlSerializationReaderInterpreter * this_ptr, app::TypeData* list_type))
    IL2CPP_REGISTER_METHOD(0x025B91B0, void, FillList, (app::XmlSerializationReaderInterpreter * this_ptr, app::Object* list, app::Object* items))
    IL2CPP_REGISTER_METHOD(0x025B91D0, void, CopyEnumerableList, (app::XmlSerializationReaderInterpreter * this_ptr, app::Object* source, app::Object* dest))
    IL2CPP_REGISTER_METHOD(0x025B9550, app::Object*, ReadXmlNodeElement, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, bool is_nullable))
    IL2CPP_REGISTER_METHOD(0x025B9580, app::Object*, ReadXmlNode, (app::XmlSerializationReaderInterpreter * this_ptr, app::TypeData* type, bool wrapped))
    IL2CPP_REGISTER_METHOD(0x025B9670, app::Object*, ReadPrimitiveElement, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, bool is_nullable))
    IL2CPP_REGISTER_METHOD(0x025B9830, app::Object*, ReadEnumElement, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, bool is_nullable))
    IL2CPP_REGISTER_METHOD(0x025B98B0, app::Object*, GetEnumValue, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, app::String* val))
    IL2CPP_REGISTER_METHOD(0x025B9AC0, app::Object*, ReadXmlSerializableElement, (app::XmlSerializationReaderInterpreter * this_ptr, app::XmlTypeMapping* type_map, bool is_nullable))
    IL2CPP_REGISTER_METHOD(0x025B9D60, void, cctor, ())
} // namespace app::classes::System::Xml::Serialization::XmlSerializationReaderInterpreter
