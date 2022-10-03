#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTreeGen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTreeGen__Class** type_info;
        inline app::XmlTreeGen__Class* get_class() {
            return il2cpp::get_class<app::XmlTreeGen__Class>(type_info, "System.Data", "XmlTreeGen");
        }
        inline app::XmlTreeGen* create() {
            return il2cpp::create_object<app::XmlTreeGen>(get_class());
        }
    } // namespace XmlTreeGen
} // namespace app::classes::types
