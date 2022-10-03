#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAttributeCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAttributeCollection__Class** type_info;
        inline app::XmlAttributeCollection__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeCollection__Class>(type_info, "System.Xml", "XmlAttributeCollection");
        }
        inline app::XmlAttributeCollection* create() {
            return il2cpp::create_object<app::XmlAttributeCollection>(get_class());
        }
    } // namespace XmlAttributeCollection
} // namespace app::classes::types
