#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSchemaComplexContent.h>
#include <Modloader/app/structs/XmlSchemaContent.h>

namespace app::classes::System::Xml::Schema::XmlSchemaComplexContent {
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsMixed, (app::XmlSchemaComplexContent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA31F0, void, set_IsMixed, (app::XmlSchemaComplexContent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlSchemaContent*, get_Content, (app::XmlSchemaComplexContent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Content, (app::XmlSchemaComplexContent * this_ptr, app::XmlSchemaContent* value))
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_HasMixedAttribute, (app::XmlSchemaComplexContent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSchemaComplexContent * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaComplexContent
