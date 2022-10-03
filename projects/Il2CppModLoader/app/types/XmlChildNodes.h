#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlChildNodes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlChildNodes__Class** type_info;
        inline app::XmlChildNodes__Class* get_class() {
            return il2cpp::get_class<app::XmlChildNodes__Class>(type_info, "System.Xml", "XmlChildNodes");
        }
        inline app::XmlChildNodes* create() {
            return il2cpp::create_object<app::XmlChildNodes>(get_class());
        }
    } // namespace XmlChildNodes
} // namespace app::classes::types
