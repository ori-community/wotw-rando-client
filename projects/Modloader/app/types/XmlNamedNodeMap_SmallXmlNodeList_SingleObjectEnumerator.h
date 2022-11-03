#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator {
        inline app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Class** type_info = (app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472D790));
        inline app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Class>(type_info, "System.Xml", "XmlNamedNodeMap+SmallXmlNodeList", "SingleObjectEnumerator");
        }
        inline app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator* create() {
            return il2cpp::create_object<app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator>(get_class());
        }
    } // namespace XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator
} // namespace app::classes::types
