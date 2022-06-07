#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator {
    IL2CPP_REGISTER_METHOD(0x01CB8800, void, ctor, (app::XmlSchemaObjectTable_XSODictionaryEnumerator * this_ptr, app::List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ * entries, int32_t size, app::XmlSchemaObjectTable_EnumeratorType__Enum enum_type))
    IL2CPP_REGISTER_METHOD(0x01CB8820, app::DictionaryEntry, get_Entry, (app::XmlSchemaObjectTable_XSODictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713570, XmlSchemaObjectTable_XSODictionaryEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CB89E0, app::Object *, get_Key, (app::XmlSchemaObjectTable_XSODictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739220, XmlSchemaObjectTable_XSODictionaryEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CB8B90, app::Object *, get_Value, (app::XmlSchemaObjectTable_XSODictionaryEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791F28, XmlSchemaObjectTable_XSODictionaryEnumerator_get_Value__MethodInfo)
}
