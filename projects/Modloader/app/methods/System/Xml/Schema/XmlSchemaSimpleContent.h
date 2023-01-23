#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSchemaContent.h>
#include <Modloader/app/structs/XmlSchemaSimpleContent.h>

namespace app::classes::System::Xml::Schema::XmlSchemaSimpleContent {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlSchemaContent*, get_Content, (app::XmlSchemaSimpleContent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Content, (app::XmlSchemaSimpleContent * this_ptr, app::XmlSchemaContent* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSchemaSimpleContent * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaSimpleContent
