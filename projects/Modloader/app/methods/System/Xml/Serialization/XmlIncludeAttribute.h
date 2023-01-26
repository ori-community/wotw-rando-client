#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlIncludeAttribute.h>

namespace app::classes::System::Xml::Serialization::XmlIncludeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_Type, (app::XmlIncludeAttribute * this_ptr))
}
