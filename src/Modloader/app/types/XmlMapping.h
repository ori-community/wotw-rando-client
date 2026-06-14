#pragma once
#include <Modloader/app/structs/XmlMapping.h>
#include <Modloader/app/structs/XmlMapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlMapping {
        inline app::XmlMapping__Class** type_info() {
            static app::XmlMapping__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlMapping__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlMapping__Class>(type_info(), "System.Xml.Serialization", "XmlMapping");
        }
        inline app::XmlMapping* create() {
            return il2cpp::create_object<app::XmlMapping>(get_class());
        }
    } // namespace XmlMapping
} // namespace app::classes::types
