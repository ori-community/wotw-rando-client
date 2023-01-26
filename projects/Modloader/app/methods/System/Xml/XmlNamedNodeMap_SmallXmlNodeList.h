#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlNamedNodeMap_SmallXmlNodeList__Boxed.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::XmlNamedNodeMap_SmallXmlNodeList {
    IL2CPP_REGISTER_METHOD(0x001CFBF0, int32_t, get_Count, (app::XmlNamedNodeMap_SmallXmlNodeList__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001CFC00, app::Object*, get_Item, (app::XmlNamedNodeMap_SmallXmlNodeList__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x001CFC10, void, Add, (app::XmlNamedNodeMap_SmallXmlNodeList__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001CFC20, void, RemoveAt, (app::XmlNamedNodeMap_SmallXmlNodeList__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x001CFC30, void, Insert, (app::XmlNamedNodeMap_SmallXmlNodeList__Boxed * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001CFC40, app::IEnumerator*, GetEnumerator, (app::XmlNamedNodeMap_SmallXmlNodeList__Boxed * this_ptr))
} // namespace app::classes::System::Xml::XmlNamedNodeMap_SmallXmlNodeList
