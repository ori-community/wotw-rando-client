#pragma once
#include <Modloader/app/structs/XmlAttributeEventHandler.h>
#include <Modloader/app/structs/XmlAttributeEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAttributeEventHandler {
        inline app::XmlAttributeEventHandler__Class** type_info() {
            static app::XmlAttributeEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlAttributeEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlAttributeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeEventHandler__Class>(type_info(), "System.Xml.Serialization", "XmlAttributeEventHandler");
        }
        inline app::XmlAttributeEventHandler* create() {
            return il2cpp::create_object<app::XmlAttributeEventHandler>(get_class());
        }
    } // namespace XmlAttributeEventHandler
} // namespace app::classes::types
