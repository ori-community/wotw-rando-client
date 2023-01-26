#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlLinkedNode.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Xml::XmlLinkedNode {
    IL2CPP_REGISTER_METHOD(0x01DB9A00, void, ctor, (app::XmlLinkedNode * this_ptr, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x01DB9A20, app::XmlNode*, get_PreviousSibling, (app::XmlLinkedNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB9AA0, app::XmlNode*, get_NextSibling, (app::XmlLinkedNode * this_ptr))
} // namespace app::classes::System::Xml::XmlLinkedNode
