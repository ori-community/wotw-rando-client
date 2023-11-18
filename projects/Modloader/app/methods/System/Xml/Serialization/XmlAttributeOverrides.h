#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlAttributeOverrides.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeMember.h>
#include <Modloader/app/structs/XmlAttributes.h>

namespace app::classes::System::Xml::Serialization::XmlAttributeOverrides {
    IL2CPP_REGISTER_METHOD(0x01C9B4C0, void, ctor, (app::XmlAttributeOverrides * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9B620, app::XmlAttributes*, get_Item_1, (app::XmlAttributeOverrides * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01C9B6C0, app::XmlAttributes*, get_Item_2, (app::XmlAttributeOverrides * this_ptr, app::Type* type, app::String* member))
    IL2CPP_REGISTER_METHOD(0x01C9B8E0, app::TypeMember*, GetKey, (app::XmlAttributeOverrides * this_ptr, app::Type* type, app::String* member))
    IL2CPP_REGISTER_METHOD(0x01C9BA30, void, AddKeyHash, (app::XmlAttributeOverrides * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Xml::Serialization::XmlAttributeOverrides
