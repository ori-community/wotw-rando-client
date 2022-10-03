#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XName__Class** type_info;
        inline app::XName__Class* get_class() {
            return il2cpp::get_class<app::XName__Class>(type_info, "System.Xml.Linq", "XName");
        }
        inline app::XName* create() {
            return il2cpp::create_object<app::XName>(get_class());
        }
    } // namespace XName
} // namespace app::classes::types
