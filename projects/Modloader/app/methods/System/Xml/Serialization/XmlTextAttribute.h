#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlTextAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlTextAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194CA60, app::String*, get_DataType, (app::XmlTextAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_Type, (app::XmlTextAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194CAF0, void, AddKeyHash, (app::XmlTextAttribute * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Xml::Serialization::XmlTextAttribute
