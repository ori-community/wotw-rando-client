#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchemaXPath.h>

namespace app::classes::System::Xml::Schema::XmlSchemaXPath {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_XPath, (app::XmlSchemaXPath * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_XPath, (app::XmlSchemaXPath * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSchemaXPath * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaXPath
