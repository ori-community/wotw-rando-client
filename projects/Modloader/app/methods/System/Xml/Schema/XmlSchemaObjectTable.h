#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>

namespace app::classes::System::Xml::Schema::XmlSchemaObjectTable {
    IL2CPP_REGISTER_METHOD(0x01CB7370, void, ctor, app::XmlSchemaObjectTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB7660, void, Add, app::XmlSchemaObjectTable* this_ptr, app::XmlQualifiedName* name, app::XmlSchemaObject* value)
    IL2CPP_REGISTER_METHOD(0x01CB77C0, void, Insert, app::XmlSchemaObjectTable* this_ptr, app::XmlQualifiedName* name, app::XmlSchemaObject* value)
    IL2CPP_REGISTER_METHOD(0x01CB7990, void, Replace, app::XmlSchemaObjectTable* this_ptr, app::XmlQualifiedName* name, app::XmlSchemaObject* value)
    IL2CPP_REGISTER_METHOD(0x01CB7B50, void, Clear, app::XmlSchemaObjectTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB7C20, void, Remove, app::XmlSchemaObjectTable* this_ptr, app::XmlQualifiedName* name)
    IL2CPP_REGISTER_METHOD(0x01CB7DF0, int32_t, FindIndexByValue, app::XmlSchemaObjectTable* this_ptr, app::XmlSchemaObject* xso)
    IL2CPP_REGISTER_METHOD(0x01CB7EE0, int32_t, get_Count, app::XmlSchemaObjectTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB7F70, bool, Contains, app::XmlSchemaObjectTable* this_ptr, app::XmlQualifiedName* name)
    IL2CPP_REGISTER_METHOD(0x01CB8030, app::XmlSchemaObject*, get_Item, app::XmlSchemaObjectTable* this_ptr, app::XmlQualifiedName* name)
    IL2CPP_REGISTER_METHOD(0x01CB8130, app::ICollection*, get_Values, app::XmlSchemaObjectTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB82A0, app::IDictionaryEnumerator*, GetEnumerator, app::XmlSchemaObjectTable* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaObjectTable
