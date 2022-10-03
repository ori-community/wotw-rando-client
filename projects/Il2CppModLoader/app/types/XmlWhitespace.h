#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWhitespace {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlWhitespace__Class** type_info;
        inline app::XmlWhitespace__Class* get_class() {
            return il2cpp::get_class<app::XmlWhitespace__Class>(type_info, "System.Xml", "XmlWhitespace");
        }
        inline app::XmlWhitespace* create() {
            return il2cpp::create_object<app::XmlWhitespace>(get_class());
        }
    } // namespace XmlWhitespace
} // namespace app::classes::types
