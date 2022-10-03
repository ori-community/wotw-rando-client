#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlBooleanConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlBooleanConverter__Class** type_info;
        inline app::XmlBooleanConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlBooleanConverter__Class>(type_info, "System.Xml.Schema", "XmlBooleanConverter");
        }
        inline app::XmlBooleanConverter* create() {
            return il2cpp::create_object<app::XmlBooleanConverter>(get_class());
        }
    } // namespace XmlBooleanConverter
} // namespace app::classes::types
