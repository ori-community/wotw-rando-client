#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNotation__Class** type_info;
        inline app::XmlNotation__Class* get_class() {
            return il2cpp::get_class<app::XmlNotation__Class>(type_info, "System.Xml", "XmlNotation");
        }
        inline app::XmlNotation* create() {
            return il2cpp::create_object<app::XmlNotation>(get_class());
        }
    } // namespace XmlNotation
} // namespace app::classes::types
