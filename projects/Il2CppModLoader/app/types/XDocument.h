#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XDocument {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XDocument__Class** type_info;
        inline app::XDocument__Class* get_class() {
            return il2cpp::get_class<app::XDocument__Class>(type_info, "System.Xml.Linq", "XDocument");
        }
        inline app::XDocument* create() {
            return il2cpp::create_object<app::XDocument>(get_class());
        }
    } // namespace XDocument
} // namespace app::classes::types
