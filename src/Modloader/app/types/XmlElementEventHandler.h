#pragma once
#include <Modloader/app/structs/XmlElementEventHandler.h>
#include <Modloader/app/structs/XmlElementEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlElementEventHandler {
        inline app::XmlElementEventHandler__Class** type_info() {
            static app::XmlElementEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlElementEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlElementEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlElementEventHandler__Class>(type_info(), "System.Xml.Serialization", "XmlElementEventHandler");
        }
        inline app::XmlElementEventHandler* create() {
            return il2cpp::create_object<app::XmlElementEventHandler>(get_class());
        }
    } // namespace XmlElementEventHandler
} // namespace app::classes::types
