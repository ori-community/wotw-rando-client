#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlElementAttributes {
    IL2CPP_REGISTER_METHOD(0x025A1D20, app::XmlElementAttribute*, get_Item, (app::XmlElementAttributes * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025A1E10, int32_t, Add, (app::XmlElementAttributes * this_ptr, app::XmlElementAttribute* attribute))
    IL2CPP_REGISTER_METHOD(0x025A1EB0, void, AddKeyHash, (app::XmlElementAttributes * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x025A2100, int32_t, get_Order, (app::XmlElementAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, ctor, (app::XmlElementAttributes * this_ptr))
} // namespace app::classes::System::Xml::Serialization::XmlElementAttributes
