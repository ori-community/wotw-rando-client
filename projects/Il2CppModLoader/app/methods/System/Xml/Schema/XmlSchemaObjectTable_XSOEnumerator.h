#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator {
    IL2CPP_REGISTER_METHOD(0x01CB8800, void, ctor, (app::XmlSchemaObjectTable_XSOEnumerator * this_ptr, app::List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ * entries, int32_t size, app::XmlSchemaObjectTable_EnumeratorType__Enum enum_type))
    IL2CPP_REGISTER_METHOD(0x01CB8D40, app::Object *, get_Current, (app::XmlSchemaObjectTable_XSOEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047614D0, XmlSchemaObjectTable_XSOEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CB8F50, bool, MoveNext, (app::XmlSchemaObjectTable_XSOEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB9050, void, Reset, (app::XmlSchemaObjectTable_XSOEnumerator * this_ptr))
}
