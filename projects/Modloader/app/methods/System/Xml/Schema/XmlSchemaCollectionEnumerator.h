#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlSchemaCollectionEnumerator {
    IL2CPP_REGISTER_METHOD(0x01CA2E60, void, ctor, (app::XmlSchemaCollectionEnumerator * this_ptr, app::Hashtable* collection))
    IL2CPP_REGISTER_METHOD(0x01CA2EA0, void, IEnumerator_Reset, (app::XmlSchemaCollectionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA2F30, bool, IEnumerator_MoveNext, (app::XmlSchemaCollectionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA2FC0, bool, MoveNext, (app::XmlSchemaCollectionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA3050, app::Object*, IEnumerator_get_Current, (app::XmlSchemaCollectionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA3060, app::XmlSchema*, get_Current, (app::XmlSchemaCollectionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA3130, app::XmlSchemaCollectionNode*, get_CurrentNode, (app::XmlSchemaCollectionEnumerator * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaCollectionEnumerator
