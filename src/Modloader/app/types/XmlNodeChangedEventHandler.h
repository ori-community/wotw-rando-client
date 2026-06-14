#pragma once
#include <Modloader/app/structs/XmlNodeChangedEventHandler.h>
#include <Modloader/app/structs/XmlNodeChangedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeChangedEventHandler {
        inline app::XmlNodeChangedEventHandler__Class** type_info() {
            static app::XmlNodeChangedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNodeChangedEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNodeChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeChangedEventHandler__Class>(type_info(), "System.Xml", "XmlNodeChangedEventHandler");
        }
        inline app::XmlNodeChangedEventHandler* create() {
            return il2cpp::create_object<app::XmlNodeChangedEventHandler>(get_class());
        }
    } // namespace XmlNodeChangedEventHandler
} // namespace app::classes::types
