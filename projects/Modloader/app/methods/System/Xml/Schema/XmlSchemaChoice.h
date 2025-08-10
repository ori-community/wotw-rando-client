#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSchemaChoice.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>

namespace app::classes::System::Xml::Schema::XmlSchemaChoice {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::XmlSchemaObjectCollection*, get_Items, app::XmlSchemaChoice* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA1E10, bool, get_IsEmpty, app::XmlSchemaChoice* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, SetItems, app::XmlSchemaChoice* this_ptr, app::XmlSchemaObjectCollection* new_items)
    IL2CPP_REGISTER_METHOD(0x01CA1E20, void, ctor, app::XmlSchemaChoice* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaChoice
