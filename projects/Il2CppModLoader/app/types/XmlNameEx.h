#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNameEx {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNameEx__Class** type_info;
        inline app::XmlNameEx__Class* get_class() {
            return il2cpp::get_class<app::XmlNameEx__Class>(type_info, "System.Xml", "XmlNameEx");
        }
        inline app::XmlNameEx* create() {
            return il2cpp::create_object<app::XmlNameEx>(get_class());
        }
    } // namespace XmlNameEx
} // namespace app::classes::types
