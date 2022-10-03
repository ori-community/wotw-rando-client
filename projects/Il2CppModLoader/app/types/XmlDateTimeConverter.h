#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDateTimeConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDateTimeConverter__Class** type_info;
        inline app::XmlDateTimeConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlDateTimeConverter__Class>(type_info, "System.Xml.Schema", "XmlDateTimeConverter");
        }
        inline app::XmlDateTimeConverter* create() {
            return il2cpp::create_object<app::XmlDateTimeConverter>(get_class());
        }
    } // namespace XmlDateTimeConverter
} // namespace app::classes::types
