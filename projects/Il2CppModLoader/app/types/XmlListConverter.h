#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlListConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlListConverter__Class** type_info;
        inline app::XmlListConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlListConverter__Class>(type_info, "System.Xml.Schema", "XmlListConverter");
        }
        inline app::XmlListConverter* create() {
            return il2cpp::create_object<app::XmlListConverter>(get_class());
        }
    } // namespace XmlListConverter
} // namespace app::classes::types
