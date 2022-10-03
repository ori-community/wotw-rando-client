#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNode__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNode__Array__Class** type_info;
        inline app::XmlNode__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlNode__Array__Class>(type_info, "System.Xml", "XmlNode[]");
        }
        inline app::XmlNode__Array* create() {
            return il2cpp::create_object<app::XmlNode__Array>(get_class());
        }
    } // namespace XmlNode__Array
} // namespace app::classes::types
