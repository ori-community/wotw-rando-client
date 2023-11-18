#pragma once
#include <Modloader/app/structs/XmlTypeConvertorAttribute.h>
#include <Modloader/app/structs/XmlTypeConvertorAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeConvertorAttribute {
        inline app::XmlTypeConvertorAttribute__Class** type_info() {
            static app::XmlTypeConvertorAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlTypeConvertorAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlTypeConvertorAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeConvertorAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlTypeConvertorAttribute");
        }
        inline app::XmlTypeConvertorAttribute* create() {
            return il2cpp::create_object<app::XmlTypeConvertorAttribute>(get_class());
        }
    } // namespace XmlTypeConvertorAttribute
} // namespace app::classes::types
