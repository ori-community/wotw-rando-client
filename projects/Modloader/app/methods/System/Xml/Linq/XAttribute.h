#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XName.h>
#include <Modloader/app/structs/XNamespace.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>

namespace app::classes::System::Xml::Linq::XAttribute {
    IL2CPP_REGISTER_METHOD(0x0302E320, void, ctor_1, (app::XAttribute * this_ptr, app::XName* name, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0302E440, void, ctor_2, (app::XAttribute * this_ptr, app::XAttribute* other))
    IL2CPP_REGISTER_METHOD(0x0302E510, bool, get_IsNamespaceDeclaration, (app::XAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XName*, get_Name, (app::XAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlNodeType__Enum, get_NodeType, (app::XAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Value, (app::XAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302E610, void, set_Value, (app::XAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0302E770, app::String*, ToString, (app::XAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302ED30, app::String*, GetPrefixOfNamespace, (app::XAttribute * this_ptr, app::XNamespace* ns))
    IL2CPP_REGISTER_METHOD(0x0302EE90, void, ValidateAttribute, (app::XName * name, app::String* value))
} // namespace app::classes::System::Xml::Linq::XAttribute
