#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache_Item.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache_ItemType__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::XmlWellFormedWriter_AttributeValueCache_Item {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlWellFormedWriter_AttributeValueCache_Item * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, Set, (app::XmlWellFormedWriter_AttributeValueCache_Item * this_ptr, app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum type, app::Object* data))
} // namespace app::classes::System::Xml::XmlWellFormedWriter_AttributeValueCache_Item
