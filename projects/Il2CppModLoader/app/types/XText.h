#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XText {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XText__Class** type_info;
        inline app::XText__Class* get_class() {
            return il2cpp::get_class<app::XText__Class>(type_info, "System.Xml.Linq", "XText");
        }
        inline app::XText* create() {
            return il2cpp::create_object<app::XText>(get_class());
        }
    } // namespace XText
} // namespace app::classes::types
