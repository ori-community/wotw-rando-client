#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlLoader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlLoader__Class** type_info;
        inline app::XmlLoader__Class* get_class() {
            return il2cpp::get_class<app::XmlLoader__Class>(type_info, "System.Xml", "XmlLoader");
        }
        inline app::XmlLoader* create() {
            return il2cpp::create_object<app::XmlLoader>(get_class());
        }
    } // namespace XmlLoader
} // namespace app::classes::types
