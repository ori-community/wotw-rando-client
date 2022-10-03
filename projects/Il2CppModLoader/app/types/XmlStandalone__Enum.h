#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlStandalone__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlStandalone__Enum__Class** type_info;
        inline app::XmlStandalone__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlStandalone__Enum__Class>(type_info, "System.Xml", "XmlStandalone");
        }
        inline app::XmlStandalone__Enum* create() {
            return il2cpp::create_object<app::XmlStandalone__Enum>(get_class());
        }
    } // namespace XmlStandalone__Enum
} // namespace app::classes::types
