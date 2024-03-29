#pragma once
#include <Modloader/app/structs/XmlEventCache_XmlEvent.h>
#include <Modloader/app/structs/XmlEventCache_XmlEvent__Array.h>
#include <Modloader/app/structs/XmlEventCache_XmlEvent__Boxed.h>
#include <Modloader/app/structs/XmlEventCache_XmlEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlEventCache_XmlEvent {
        inline app::XmlEventCache_XmlEvent__Class** type_info() {
            static app::XmlEventCache_XmlEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlEventCache_XmlEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlEventCache_XmlEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlEventCache_XmlEvent__Class>(type_info(), "System.Xml", "XmlEventCache", "XmlEvent");
        }
        inline app::XmlEventCache_XmlEvent* create() {
            return il2cpp::create_object<app::XmlEventCache_XmlEvent>(get_class());
        }
        inline app::XmlEventCache_XmlEvent__Boxed* box(app::XmlEventCache_XmlEvent value) {
            return il2cpp::box_value<app::XmlEventCache_XmlEvent__Boxed>(get_class(), value);
        }
        inline app::XmlEventCache_XmlEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlEventCache_XmlEvent__Array>(get_class(), size);
        }
        inline app::XmlEventCache_XmlEvent__Array* create_array(const std::vector<app::XmlEventCache_XmlEvent>& items) {
            return il2cpp::array_new<app::XmlEventCache_XmlEvent__Array>(get_class(), items);
        }
    } // namespace XmlEventCache_XmlEvent
} // namespace app::classes::types
