#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNumeric10Converter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNumeric10Converter__Class** type_info;
        inline app::XmlNumeric10Converter__Class* get_class() {
            return il2cpp::get_class<app::XmlNumeric10Converter__Class>(type_info, "System.Xml.Schema", "XmlNumeric10Converter");
        }
        inline app::XmlNumeric10Converter* create() {
            return il2cpp::create_object<app::XmlNumeric10Converter>(get_class());
        }
    } // namespace XmlNumeric10Converter
} // namespace app::classes::types
