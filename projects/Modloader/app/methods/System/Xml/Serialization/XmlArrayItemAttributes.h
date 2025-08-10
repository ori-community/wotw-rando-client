#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XmlArrayItemAttribute.h>
#include <Modloader/app/structs/XmlArrayItemAttributes.h>

namespace app::classes::System::Xml::Serialization::XmlArrayItemAttributes {
    IL2CPP_REGISTER_METHOD(0x01C9AC80, app::XmlArrayItemAttribute*, get_Item, app::XmlArrayItemAttributes* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01C9AD70, int32_t, Add, app::XmlArrayItemAttributes* this_ptr, app::XmlArrayItemAttribute* attribute)
    IL2CPP_REGISTER_METHOD(0x01C9AE10, void, AddKeyHash, app::XmlArrayItemAttributes* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, ctor, app::XmlArrayItemAttributes* this_ptr)
} // namespace app::classes::System::Xml::Serialization::XmlArrayItemAttributes
