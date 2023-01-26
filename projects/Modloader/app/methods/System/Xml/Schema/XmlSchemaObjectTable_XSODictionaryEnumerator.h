#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSchemaObjectTable_XSODictionaryEnumerator.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_EnumeratorType__Enum.h>

namespace app::classes::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator {
    IL2CPP_REGISTER_METHOD(0x01CB8800, void, ctor, (app::XmlSchemaObjectTable_XSODictionaryEnumerator * this_ptr, app::List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* entries, int32_t size, app::XmlSchemaObjectTable_EnumeratorType__Enum enum_type))
    IL2CPP_REGISTER_METHOD(0x01CB8820, app::DictionaryEntry, get_Entry, (app::XmlSchemaObjectTable_XSODictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB89E0, app::Object*, get_Key, (app::XmlSchemaObjectTable_XSODictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB8B90, app::Object*, get_Value, (app::XmlSchemaObjectTable_XSODictionaryEnumerator * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator
