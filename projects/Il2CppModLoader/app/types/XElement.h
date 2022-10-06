#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElement__Class** type_info;
        inline app::XElement__Class* get_class() {
            return il2cpp::get_class<app::XElement__Class>(type_info, "System.Xml.Linq", "XElement");
        }
        inline app::XElement* create() {
            return il2cpp::create_object<app::XElement>(get_class());
        }
        inline app::XElement__Array* create_array(int size) {
            return il2cpp::array_new<app::XElement__Array>(get_class(), size);
        }
        inline app::XElement__Array* create_array(const std::vector<app::XElement*>& items) {
            return il2cpp::array_new<app::XElement__Array>(get_class(), items);
        }
    } // namespace XElement
} // namespace app::classes::types
