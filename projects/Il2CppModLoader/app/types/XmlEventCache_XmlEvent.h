#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlEventCache_XmlEvent {
        namespace {
            inline app::XmlEventCache_XmlEvent__Class* type_info_ref = nullptr;
        }
        inline app::XmlEventCache_XmlEvent__Class** type_info = &type_info_ref;
        inline app::XmlEventCache_XmlEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlEventCache_XmlEvent__Class>(type_info, "System.Xml", "XmlEventCache", "XmlEvent");
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
