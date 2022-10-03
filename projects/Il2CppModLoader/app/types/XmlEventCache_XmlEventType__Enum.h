#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlEventCache_XmlEventType__Enum {
        namespace {
            app::XmlEventCache_XmlEventType__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlEventCache_XmlEventType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlEventCache_XmlEventType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlEventCache_XmlEventType__Enum__Class>(type_info, "System.Xml", "XmlEventCache", "XmlEventType");
        }
        inline app::XmlEventCache_XmlEventType__Enum* create() {
            return il2cpp::create_object<app::XmlEventCache_XmlEventType__Enum>(get_class());
        }
    } // namespace XmlEventCache_XmlEventType__Enum
} // namespace app::classes::types
