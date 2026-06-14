#pragma once
#include <Modloader/app/structs/XmlNamedNodeMap_SmallXmlNodeList.h>
#include <Modloader/app/structs/XmlNamedNodeMap_SmallXmlNodeList__Boxed.h>
#include <Modloader/app/structs/XmlNamedNodeMap_SmallXmlNodeList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNamedNodeMap_SmallXmlNodeList {
        inline app::XmlNamedNodeMap_SmallXmlNodeList__Class** type_info() {
            static app::XmlNamedNodeMap_SmallXmlNodeList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNamedNodeMap_SmallXmlNodeList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNamedNodeMap_SmallXmlNodeList__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlNamedNodeMap_SmallXmlNodeList__Class>(type_info(), "System.Xml", "XmlNamedNodeMap", "SmallXmlNodeList");
        }
        inline app::XmlNamedNodeMap_SmallXmlNodeList* create() {
            return il2cpp::create_object<app::XmlNamedNodeMap_SmallXmlNodeList>(get_class());
        }
        inline app::XmlNamedNodeMap_SmallXmlNodeList__Boxed* box(app::XmlNamedNodeMap_SmallXmlNodeList value) {
            return il2cpp::box_value<app::XmlNamedNodeMap_SmallXmlNodeList__Boxed>(get_class(), value);
        }
    } // namespace XmlNamedNodeMap_SmallXmlNodeList
} // namespace app::classes::types
