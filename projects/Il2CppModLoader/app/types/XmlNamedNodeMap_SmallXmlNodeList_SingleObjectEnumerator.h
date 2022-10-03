#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Class** type_info;
        inline app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Class>(type_info, "System.Xml", "XmlNamedNodeMap+SmallXmlNodeList", "SingleObjectEnumerator");
        }
        inline app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator* create() {
            return il2cpp::create_object<app::XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator>(get_class());
        }
    } // namespace XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator
} // namespace app::classes::types
