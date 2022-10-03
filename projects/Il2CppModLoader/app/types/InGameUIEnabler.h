#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InGameUIEnabler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InGameUIEnabler__Class** type_info;
        inline app::InGameUIEnabler__Class* get_class() {
            return il2cpp::get_class<app::InGameUIEnabler__Class>(type_info, "", "InGameUIEnabler");
        }
        inline app::InGameUIEnabler* create() {
            return il2cpp::create_object<app::InGameUIEnabler>(get_class());
        }
    } // namespace InGameUIEnabler
} // namespace app::classes::types
