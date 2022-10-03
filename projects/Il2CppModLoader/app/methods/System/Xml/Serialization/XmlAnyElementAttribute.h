#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlAnyElementAttribute {
    IL2CPP_REGISTER_METHOD(0x00443280, void, ctor, (app::XmlAnyElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C99C40, app::String*, get_Name, (app::XmlAnyElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Namespace, (app::XmlAnyElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Order, (app::XmlAnyElementAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C99CD0, void, AddKeyHash, (app::XmlAnyElementAttribute * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Xml::Serialization::XmlAnyElementAttribute
