#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XComment {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XComment__Class** type_info;
        inline app::XComment__Class* get_class() {
            return il2cpp::get_class<app::XComment__Class>(type_info, "System.Xml.Linq", "XComment");
        }
        inline app::XComment* create() {
            return il2cpp::create_object<app::XComment>(get_class());
        }
    } // namespace XComment
} // namespace app::classes::types
