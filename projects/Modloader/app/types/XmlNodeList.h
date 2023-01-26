#pragma once
#include <Modloader/app/structs/XmlNodeList.h>
#include <Modloader/app/structs/XmlNodeList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeList {
        inline app::XmlNodeList__Class** type_info() {
            static app::XmlNodeList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNodeList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNodeList__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeList__Class>(type_info(), "System.Xml", "XmlNodeList");
        }
        inline app::XmlNodeList* create() {
            return il2cpp::create_object<app::XmlNodeList>(get_class());
        }
    } // namespace XmlNodeList
} // namespace app::classes::types
