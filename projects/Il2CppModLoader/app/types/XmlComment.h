#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlComment {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlComment__Class** type_info;
        inline app::XmlComment__Class* get_class() {
            return il2cpp::get_class<app::XmlComment__Class>(type_info, "System.Xml", "XmlComment");
        }
        inline app::XmlComment* create() {
            return il2cpp::create_object<app::XmlComment>(get_class());
        }
    } // namespace XmlComment
} // namespace app::classes::types
