#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNamedNodeMap_SmallXmlNodeList {
        namespace {
            inline app::XmlNamedNodeMap_SmallXmlNodeList__Class* type_info_ref = nullptr;
        }
        inline app::XmlNamedNodeMap_SmallXmlNodeList__Class** type_info = &type_info_ref;
        inline app::XmlNamedNodeMap_SmallXmlNodeList__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlNamedNodeMap_SmallXmlNodeList__Class>(type_info, "System.Xml", "XmlNamedNodeMap", "SmallXmlNodeList");
        }
        inline app::XmlNamedNodeMap_SmallXmlNodeList* create() {
            return il2cpp::create_object<app::XmlNamedNodeMap_SmallXmlNodeList>(get_class());
        }
        inline app::XmlNamedNodeMap_SmallXmlNodeList__Boxed* box(app::XmlNamedNodeMap_SmallXmlNodeList value) {
            return il2cpp::box_value<app::XmlNamedNodeMap_SmallXmlNodeList__Boxed>(get_class(), value);
        }
    } // namespace XmlNamedNodeMap_SmallXmlNodeList
} // namespace app::classes::types
