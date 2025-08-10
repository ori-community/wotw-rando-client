#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaSequence.h>

namespace app::classes::System::Xml::Schema::XmlSchemaSequence {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::XmlSchemaObjectCollection*, get_Items, app::XmlSchemaSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C9FDA0, bool, get_IsEmpty, app::XmlSchemaSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, SetItems, app::XmlSchemaSequence* this_ptr, app::XmlSchemaObjectCollection* new_items)
    IL2CPP_REGISTER_METHOD(0x01CBA770, void, ctor, app::XmlSchemaSequence* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaSequence
