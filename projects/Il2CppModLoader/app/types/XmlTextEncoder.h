#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextEncoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextEncoder__Class** type_info;
        inline app::XmlTextEncoder__Class* get_class() {
            return il2cpp::get_class<app::XmlTextEncoder__Class>(type_info, "System.Xml", "XmlTextEncoder");
        }
        inline app::XmlTextEncoder* create() {
            return il2cpp::create_object<app::XmlTextEncoder>(get_class());
        }
    } // namespace XmlTextEncoder
} // namespace app::classes::types
