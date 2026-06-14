#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSchemaAll.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>

namespace app::classes::System::Xml::Schema::XmlSchemaAll {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::XmlSchemaObjectCollection*, get_Items, app::XmlSchemaAll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C9FDA0, bool, get_IsEmpty, app::XmlSchemaAll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, SetItems, app::XmlSchemaAll* this_ptr, app::XmlSchemaObjectCollection* new_items)
    IL2CPP_REGISTER_METHOD(0x01C9FE00, void, ctor, app::XmlSchemaAll* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaAll
