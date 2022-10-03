#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSignificantWhitespace {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSignificantWhitespace__Class** type_info;
        inline app::XmlSignificantWhitespace__Class* get_class() {
            return il2cpp::get_class<app::XmlSignificantWhitespace__Class>(type_info, "System.Xml", "XmlSignificantWhitespace");
        }
        inline app::XmlSignificantWhitespace* create() {
            return il2cpp::create_object<app::XmlSignificantWhitespace>(get_class());
        }
    } // namespace XmlSignificantWhitespace
} // namespace app::classes::types
