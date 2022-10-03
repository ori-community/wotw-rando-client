#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TernaryTreeReadOnly {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TernaryTreeReadOnly__Class** type_info;
        inline app::TernaryTreeReadOnly__Class* get_class() {
            return il2cpp::get_class<app::TernaryTreeReadOnly__Class>(type_info, "System.Xml", "TernaryTreeReadOnly");
        }
        inline app::TernaryTreeReadOnly* create() {
            return il2cpp::create_object<app::TernaryTreeReadOnly>(get_class());
        }
    } // namespace TernaryTreeReadOnly
} // namespace app::classes::types
