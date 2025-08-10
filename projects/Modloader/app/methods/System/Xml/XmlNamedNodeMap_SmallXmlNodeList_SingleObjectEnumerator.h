#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator.h>

namespace app::classes::System::Xml::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator {
    IL2CPP_REGISTER_METHOD(0x01DC2A00, void, ctor, app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01DC2A10, app::Object*, get_Current, app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DC2AC0, bool, MoveNext, app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator* this_ptr)
} // namespace app::classes::System::Xml::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator
