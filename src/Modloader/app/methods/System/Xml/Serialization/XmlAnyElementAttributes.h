#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XmlAnyElementAttribute.h>
#include <Modloader/app/structs/XmlAnyElementAttributes.h>

namespace app::classes::System::Xml::Serialization::XmlAnyElementAttributes {
    IL2CPP_REGISTER_METHOD(0x01C99DB0, app::XmlAnyElementAttribute*, get_Item, app::XmlAnyElementAttributes* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01C99EA0, int32_t, Add, app::XmlAnyElementAttributes* this_ptr, app::XmlAnyElementAttribute* attribute)
    IL2CPP_REGISTER_METHOD(0x01C99F40, void, AddKeyHash, app::XmlAnyElementAttributes* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x01C9A420, int32_t, get_Order, app::XmlAnyElementAttributes* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, ctor, app::XmlAnyElementAttributes* this_ptr)
} // namespace app::classes::System::Xml::Serialization::XmlAnyElementAttributes
