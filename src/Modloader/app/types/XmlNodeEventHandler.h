#pragma once
#include <Modloader/app/structs/XmlNodeEventHandler.h>
#include <Modloader/app/structs/XmlNodeEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeEventHandler {
        inline app::XmlNodeEventHandler__Class** type_info() {
            static app::XmlNodeEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNodeEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNodeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeEventHandler__Class>(type_info(), "System.Xml.Serialization", "XmlNodeEventHandler");
        }
        inline app::XmlNodeEventHandler* create() {
            return il2cpp::create_object<app::XmlNodeEventHandler>(get_class());
        }
    } // namespace XmlNodeEventHandler
} // namespace app::classes::types
