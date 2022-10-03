#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlConvert {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlConvert__Class** type_info;
        inline app::XmlConvert__Class* get_class() {
            return il2cpp::get_class<app::XmlConvert__Class>(type_info, "System.Xml", "XmlConvert");
        }
        inline app::XmlConvert* create() {
            return il2cpp::create_object<app::XmlConvert>(get_class());
        }
    } // namespace XmlConvert
} // namespace app::classes::types
