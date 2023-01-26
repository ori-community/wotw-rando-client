#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XmlChoiceIdentifierAttribute.h>

namespace app::classes::System::Xml::Serialization::XmlChoiceIdentifierAttribute {
    IL2CPP_REGISTER_METHOD(0x01C9D150, app::String*, get_MemberName, (app::XmlChoiceIdentifierAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9D1E0, void, AddKeyHash, (app::XmlChoiceIdentifierAttribute * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Xml::Serialization::XmlChoiceIdentifierAttribute
