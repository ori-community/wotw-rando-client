#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlValueConverter__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlValueConverter__Array__Class** type_info;
        inline app::XmlValueConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlValueConverter__Array__Class>(type_info, "System.Xml.Schema", "XmlValueConverter[]");
        }
        inline app::XmlValueConverter__Array* create() {
            return il2cpp::create_object<app::XmlValueConverter__Array>(get_class());
        }
    } // namespace XmlValueConverter__Array
} // namespace app::classes::types
