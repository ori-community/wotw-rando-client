#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAnyConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAnyConverter__Class** type_info;
        inline app::XmlAnyConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyConverter__Class>(type_info, "System.Xml.Schema", "XmlAnyConverter");
        }
        inline app::XmlAnyConverter* create() {
            return il2cpp::create_object<app::XmlAnyConverter>(get_class());
        }
    } // namespace XmlAnyConverter
} // namespace app::classes::types
