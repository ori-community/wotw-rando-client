#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlBaseConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlBaseConverter__Class** type_info;
        inline app::XmlBaseConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlBaseConverter__Class>(type_info, "System.Xml.Schema", "XmlBaseConverter");
        }
        inline app::XmlBaseConverter* create() {
            return il2cpp::create_object<app::XmlBaseConverter>(get_class());
        }
    } // namespace XmlBaseConverter
} // namespace app::classes::types
