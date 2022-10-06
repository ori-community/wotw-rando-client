#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlEventCache_XmlEvent__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlEventCache_XmlEvent__Array__Class** type_info;
        inline app::XmlEventCache_XmlEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlEventCache_XmlEvent__Array__Class>(type_info, "System.Xml", "XmlEventCache+XmlEvent[]");
        }
        inline app::XmlEventCache_XmlEvent__Array* create() {
            return il2cpp::create_object<app::XmlEventCache_XmlEvent__Array>(get_class());
        }
        inline app::XmlEventCache_XmlEvent__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlEventCache_XmlEvent__Array__Array>(get_class(), size);
        }
        inline app::XmlEventCache_XmlEvent__Array__Array* create_array(const std::vector<app::XmlEventCache_XmlEvent__Array*>& items) {
            return il2cpp::array_new<app::XmlEventCache_XmlEvent__Array__Array>(get_class(), items);
        }
    } // namespace XmlEventCache_XmlEvent__Array
} // namespace app::classes::types
