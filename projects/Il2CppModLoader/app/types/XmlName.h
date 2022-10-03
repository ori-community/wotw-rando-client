#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlName__Class** type_info;
        inline app::XmlName__Class* get_class() {
            return il2cpp::get_class<app::XmlName__Class>(type_info, "System.Xml", "XmlName");
        }
        inline app::XmlName* create() {
            return il2cpp::create_object<app::XmlName>(get_class());
        }
        inline app::XmlName__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlName__Array>(get_class(), size);
        }
    } // namespace XmlName
} // namespace app::classes::types
