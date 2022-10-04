#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INestedSite {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INestedSite__Class** type_info;
        inline app::INestedSite__Class* get_class() {
            return il2cpp::get_class<app::INestedSite__Class>(type_info, "System.ComponentModel", "INestedSite");
        }
    } // namespace INestedSite
} // namespace app::classes::types
