#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlImplementation.h>
#include <Modloader/app/structs/XmlNameTable.h>

namespace app::classes::System::Xml::XmlImplementation {
    IL2CPP_REGISTER_METHOD(0x01DB9760, void, ctor_1, app::XmlImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, app::XmlImplementation* this_ptr, app::XmlNameTable* nt)
    IL2CPP_REGISTER_METHOD(0x01DB98B0, app::XmlDocument*, CreateDocument, app::XmlImplementation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlNameTable*, get_NameTable, app::XmlImplementation* this_ptr)
} // namespace app::classes::System::Xml::XmlImplementation
