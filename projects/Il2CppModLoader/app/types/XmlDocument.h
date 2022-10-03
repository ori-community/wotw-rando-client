#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDocument {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDocument__Class** type_info;
        inline app::XmlDocument__Class* get_class() {
            return il2cpp::get_class<app::XmlDocument__Class>(type_info, "System.Xml", "XmlDocument");
        }
        inline app::XmlDocument* create() {
            return il2cpp::create_object<app::XmlDocument>(get_class());
        }
    } // namespace XmlDocument
} // namespace app::classes::types
