#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAnyListConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAnyListConverter__Class** type_info;
        inline app::XmlAnyListConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyListConverter__Class>(type_info, "System.Xml.Schema", "XmlAnyListConverter");
        }
        inline app::XmlAnyListConverter* create() {
            return il2cpp::create_object<app::XmlAnyListConverter>(get_class());
        }
    } // namespace XmlAnyListConverter
} // namespace app::classes::types
